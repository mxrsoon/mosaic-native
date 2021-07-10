import { Debug } from "../../mosaic/diagnostics";
import Test from "./Test.js";
import { TestResult } from "./TestResult.js";

/**
 * A set of tests to be executed.
 */
export class TestSet {
    /**
     * Create a new test set.
     * @param {object} props Test set properties.
     * @param {function} props.tests Tests to execute.
     * @param {function} props.before Function that needs to be executed before the tests.
     * @param {function} props.after Function that needs to be executed after the tests.
     */
    constructor({ tests, before, after }) {
        this.#tests = tests;
        this.#before = before;
        this.#after = after;
    }

    /** @type {Test[]} */
    #tests;

    /** @type {function} */
    #before;

    /** @type {function} */
    #after;

    /** @type {TestResult[]} */
    #results = [];

    /**
     * Results of the last run.
     * @type {TestResult[]}
     */
    get results() {
        return Array.from(this.#results);
    }

    /**
     * Run the tests.
     * @returns {TestResult[]} Results of the run.
     */
    async run(printResults = false) {
        /** @type {TestResult[]} */
        let results = [];

        if (this.#before) {
            await this.#before();
        }

        for (let test of this.#tests) {
            const result = await test.run();
            results.push(result);

            if (printResults) {
                Debug.log(result.toString());
            }
        }

        if (this.#after) {
            await this.#after();
        }

        this.#results = results;
        return this.results;
    }
}

export default TestSet;