import { Window, DrawingArea, DrawingContext } from "../mosaic/presentation";
import { Debug } from "../mosaic/diagnostics";

const window = new Window("Test", 600, 400);
const drawingArea = new DrawingArea();

window.addChild(drawingArea);

drawingArea.onDraw = context => {
    Debug.log("constructor", context.constructor.name);
    Debug.log("is instance", context instanceof DrawingContext);
};

await window.show();