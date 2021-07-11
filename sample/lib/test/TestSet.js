import { Debug } from "../../mosaic/diagnostics/index.js";
import Test from "./Test.js";
import { TestSummary } from "./TestSummary.js";

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

    /** @type {TestSummary} */
    #summary = [];

    /**
     * Summary of the last run.
     * @type {TestSummary}
     */
    get summary() {
        return Array.from(this.#summary);
    }

    /**
     * Run the tests.
     * @returns {Promise<TestSummary>} Summary of the run.
     */
    async run(printResults = false) {
        const summary = new TestSummary();

        if (this.#before) {
            await this.#before();
        }

        for (let test of this.#tests) {
            const result = await test.run();
            summary.addResult(result);

            if (printResults) {
                result.print();
            }
        }

        if (printResults) {
            summary.print();
        }

        if (this.#after) {
            await this.#after();
        }

        this.#summary = summary;
        return this.summary;
    }
}

export default TestSet;