import { Debug } from "../../mosaic/diagnostics/index.js";
import { TestResult, TestResultType } from "./TestResult.js";

export class TestSummary {

    /** @type {TestResult[]} */
    #results = [];

    /** @type {number} */
    #total = 0;

    /** @type {number} */
    #passed = 0;

    /** @type {number} */
    #failed = 0;

    /** @type {number} */
    #errors = 0;

    /**
     * Test results in this summary.
     * @returns {IterableIterator<TestResult>}
     */
    get results() {
        this.#results.values();
    }

    /**
     * Number of tests that were executed.
     * @type {number} 
     */
    get total() {
        return this.#total;
    }

    /**
     * Number of tests that have passed.
     * @type {number} 
     */
    get passed() {
        return this.#passed;
    }

    /**
     * Number of tests that have failed.
     * @type {number} 
     */
    get failed() {
        return this.#failed;
    }

    /**
     * Number of tests that had errors.
     * @type {number} 
     */
    get errors() {
        return this.#errors;
    }

    /**
     * Add a result to the summary.
     * @param {TestResult} result Result to add.
     */
    addResult(result) {
        if (!this.#results.includes(result)) {
            switch (result.type) {
                case TestResultType.pass:
                    this.#passed++;
                    break;

                case TestResultType.fail:
                    this.#failed++;
                    break;

                case TestResultType.error:
                    this.#errors++;
                    break;
            }

            this.#total++;
            this.#results.push(result);
        }
    }

    /**
     * Print the summary in readable format.
     */
    print() {
        if (this.total > 0) {
            const sections = [];
            
            if (this.passed > 0) {
                sections.push(`${this.passed === this.total ? "all" : this.passed} passed`);
            }

            if (this.failed > 0) {
                sections.push(`${this.failed === this.total ? "all" : this.failed} failed`);
            }

            if (this.errors > 0) {
                sections.push(`${this.errors === this.total ? "all" : this.errors} with errors`);
            }

            /** @type {string} */
            let count;
            
            if (sections.length === 1) {
                count = `${sections[0]}.`;
            } else {
                count = `${sections.slice(0, -1).join(", ")} and ${sections[sections.length - 1]}.`;
            }
            
            count = count[0].toUpperCase() + count.substr(1);

            Debug.log();
            Debug.log(`${this.total} tests executed:`, count);
        } else {
            Debug.log("No tests executed.");
        }
    }
}

export default TestSummary;