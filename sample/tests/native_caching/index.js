import { Window, DrawingArea, DrawingContext } from "../../mosaic/presentation";
import { Debug } from "../../mosaic/diagnostics";

import { DrawingArea as DrawingArea2, DrawingContext as DrawingContext2 } from "./a.js";
import { Debug as Debug2 } from "./b.js";

const window = new Window("Test", 600, 400);
const drawingArea = new DrawingArea();

window.addChild(drawingArea);

drawingArea.onDraw = context => {
    Debug.log("constructor", context.constructor.name);
    Debug.log("is instance", context instanceof DrawingContext);
    Debug.log("is instance from reexported", context instanceof DrawingContext2);
    
    window.close();
};

Debug.log("debug instance cached", Debug === Debug2);

await window.show();