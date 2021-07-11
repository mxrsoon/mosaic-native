import { Debug } from "../../mosaic/diagnostics";

/**
 * Enum for possible test result types.
 * @enum {string}
 * @readonly
 */
export const TestResultType = {
    pass: "pass",
    fail: "fail",
    error: "error"
};

// Freeze the enum
Object.freeze(TestResultType);

/**
 * Result of a test run.
 */
export class TestResult {
    /**
     * Create a new test result.
     * @param {Test} test Test that generated the result.
     * @param {TestResultType} type Result type.
     * @param {string} cause Cause of the result.
     */
    constructor(test, type, cause) {
        this.#test = test;
        this.#type = type;
        this.#cause = cause;
    }

    /** @type {Test} */
    #test;

    /** @type {TestResultType} */
    #type;

    /** @type {string} */
    #cause;

    /**
     * Test that generated the result.
     * @type {Test}
     */
    get test() {
        return this.#test;
    } 

    /**
     * Result type.
     * @type {TestResultType}
     */
    get type() {
        return this.#type;
    }

    /**
     * Cause of the result.
     * @type {string}
     */
    get cause() {
        return this.#cause;
    }

    /**
     * Print test result in readable format.
     */
    print() {
        if (this.type === TestResultType.pass) {
            Debug.log(this.toString());
        } else {
            Debug.error(this.toString());
        }
    }

    toString() {
        const symbol = this.type === TestResultType.pass ? "✓" : "✗";
        const label = this.type[0].toUpperCase() + this.type.substr(1);

        if (this.cause) {
            return `${symbol} [${label}] ${this.test.name}: \n  - ${this.cause}`;
        } else {
            return `${symbol} [${label}] ${this.test.name}`;
        }
    }
}

export default TestResult;