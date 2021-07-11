import Debug from "@mosaic/diagnostics/Debug";
import { TestFailedError } from "./TestFailedError.js";

export function assert(value) {
    if (!value) {
        throw new TestFailedError("Assertion failed");
    }

    return true;
}

export function assertEquals(value1, value2) {
    if (value1 !== value2) {
        throw new TestFailedError("Assertion failed, values are not the same");
    }
    
    return true;
}

export async function test(name, func, ...args) {
    try {
        await func(...args);
        Debug.log(`✓ [Pass] ${name}`);
    } catch(e) {
        if (e instanceof TestFailedError) {
            Debug.log(`✗ [Fail] ${name}: ${e.message}`);
        } else {
            Debug.log(`✗ [Error] ${name}: ${e.message || "Unknown error"}`);
        }
    }
}

/** 
 * Function that will be executed until 'done' is called.
 * @callback untilFunction
 * @param {function} done Function to be called when the work is done. This will make the until() call return.
 * @param {function} error Function to be called when an error occurs. This will make the until() call throw.
 */

/**
 * Asynchronously execute a function and only resolve when a callback (first argument passed to the function)
 * is called.
 * @param {untilFunction} func Function to be executed until the callback is called.
 * @param {number} timeout Maximum time to wait for completion in milliseconds.
 * @returns {Promise} Promise that will be resolved when the callback is called.
 */
export async function until(func, timeout) {
    return new Promise(async (resolve, reject) => {
        if (Number.isFinite(timeout)) {
            setTimeout(resolve, timeout);
        }

        try {
            await func(resolve, reject);
        } catch (e) {
            reject(e);
        }
    });
}