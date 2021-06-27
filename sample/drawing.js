import { Window, DrawingArea } from "mosaic/presentation";
import { Debug } from "mosaic/diagnostics";
import { sleep } from "lib/utils.js";

let count = 0;

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

function draw(width, height) {
	if (count < 50) {
		count++;
		Debug.log("Draws:", count, "- Width:", width, "- Height:", height);
	}
}

await main();