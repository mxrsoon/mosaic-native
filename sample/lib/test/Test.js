import { TestFailedError } from "./TestFailedError.js";
import { TestResult, TestResultType } from "./TestResult.js";

/**
 * A test that can be executed.
 */
export class Test {
    /**
     * Create a new test.
     * @param {object} props Test properties.
     * @param {string} props.name Name of the test.
     * @param {function} props.test Main function of the test.
     * @param {function} props.before Function that needs to be executed before the test.
     * @param {function} props.after Function that needs to be executed after the test.
     */
    constructor({ name, test, before, after }) {
        this.#name = name;
        this.#test = test;
        this.#before = before;
        this.#after = after;
    }

    /** @type {string} */
    #name;

    /** @type {function} */
    #test;

    /** @type {function} */
    #before;

    /** @type {function} */
    #after;

    /** @type {TestResult} */
    #result;

    /**
     * Name of the test.
     * @type {string}
     */
    get name() {
        return this.#name;
    }

    /**
     * Result of the last run.
     * @type {TestResult}
     */
    get result() {
        return this.#result;
    }

    /**
     * Run the test.
     * @returns {Promise<TestResult>} Result of the run.
     */
    async run() {
        /** @type {TestResult} */
        let result;
        
        try {            
            if (this.#before) {
                await this.#before();
            }
            
            try {
                await this.#test();
                result = new TestResult(this, TestResultType.pass);
            } catch (e) {
                if (e instanceof TestFailedError) {
                    result = new TestResult(
                        this,
                        TestResultType.fail,
                        e.message
                    );
                } else {
                    throw e;
                }
            }
        } catch (e) {
            result = new TestResult(
                this,
                TestResultType.error,
                e.message || "Unknown error"
            );
        }

        try {
            if (this.#after) {
                await this.#after();
            }
        } catch (e) {
            if (result.type !== TestResultType.error) {
                result = new TestResult(
                    this,
                    TestResultType.error,
                    e.message || "Unknown error"
                );
            }
        }

        this.#result = result;
        return this.result;
    }
}

export default Test;