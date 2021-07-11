import { Debug } from "../../mosaic/diagnostics";
import Test from "./Test.js";
import { TestResult, TestResultType } from "./TestResult.js";

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

        const count = {
            passed: 0,
            failed: 0,
            errors: 0
        };

        for (let test of this.#tests) {
            const result = await test.run();
            results.push(result);

            if (printResults) {
                switch (result.type) {
                    case TestResultType.pass:
                        Debug.log(result.toString());
                        count.passed++;
                        break;
                    
                    case TestResultType.fail:
                        Debug.error(result.toString());
                        count.failed++;
                        break;

                    case TestResultType.error:
                        Debug.error(result.toString());
                        count.errors++;
                        break;
                }
            }
        }

        if (printResults) {
            this.#printSummary(count);
        }

        if (this.#after) {
            await this.#after();
        }

        this.#results = results;
        return this.results;
    }

    #printSummary(count) {
        const summary = [];
        
        if (count.passed > 0) {
            summary.push(`${count.passed} passed`);
        }

        if (count.failed > 0) {
            summary.push(`${count.failed} failed`);
        }

        if (count.errors > 0) {
            summary.push(`${count.errors} with error`);
        }

        if (summary.length === 0) {
            Debug.log("No tests executed.");
        } else if (summary.length === 1) {
            Debug.log();
            Debug.log(`${summary[0]}.`);
        } else {
            Debug.log();
            Debug.log(`${summary.slice(0, -1).join(", ")} and ${summary[summary.length - 1]}.`);
        }
    }
}

export default TestSet;