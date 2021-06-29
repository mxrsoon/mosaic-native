import { Window, DrawingArea } from "mosaic/presentation";
import { Debug } from "mosaic/diagnostics";

async function main() {
	const window = showWindow();
	window.addChild(createDrawingArea());
}

function showWindow() {
	const window = new Window("Title", 600, 400);
	window.show();
	return window;
}

function createDrawingArea() {
	const area = new DrawingArea();
	area.onDraw = draw;
	return area;
}

function draw(context) {
	Debug.log("Drawing:", context.constructor.name);
}

await main();