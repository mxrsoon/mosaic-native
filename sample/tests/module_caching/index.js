import { Window, DrawingArea, DrawingContext } from "../../mosaic/presentation";
import { Debug } from "../../mosaic/diagnostics";

import { DrawingArea as DrawingArea2, DrawingContext as DrawingContext2, testVar } from "./a.js";
import { Debug as Debug2, testVar as testVar2 } from "./b.js";
import { assert, assertEquals, until } from "../../lib/test";
import Test from "../../lib/test/Test.js";
import TestSet from "../../lib/test/TestSet.js";

let window;
let drawingArea;
let context;

async function setupDrawing() {
    window = new Window("Test", 600, 400);
    drawingArea = new DrawingArea();
    
    window.addChild(drawingArea);
    
    await until((done) => {
        drawingArea.onDraw = drawingContext => {
            drawingArea.onDraw = null;
            context = drawingContext;
            done();
        }

        window.show();
    }, 1000);
}

function cleanup() {
    window.close();
    window = null;
    drawingArea = null;
    context = null;
}

await new TestSet({
    tests: [
        new Test({
            name: "should use same constructor for JS and Native instances",
            before: setupDrawing,
            after: cleanup,
            test: () => assert(context instanceof DrawingContext)
        }),

        new Test({
            name: "should use same constructor between JS modules",
            test: () => assertEquals(DrawingContext, DrawingContext2)
        }),

        new Test({
            name: "should use same singleton between modules",
            test: () => assertEquals(Debug, Debug2)
        }),

        new Test({
            name: "should use same instance of JS module",
            test: () => assertEquals(testVar, testVar2)
        })
    ]
}).run(true);