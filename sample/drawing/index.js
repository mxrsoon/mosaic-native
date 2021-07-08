import { Window, DrawingArea } from "../mosaic/presentation";
import { Block } from "./Block.js";
import { Color } from "./Color.js";
import { sleep } from "../lib/utils.js";

let window, drawingArea;
let blocks = [
	new Block(0, 0, 20, 20, new Color(255, 255, 0)),
	new Block(30, 100, 20, 20, new Color(0, 255, 0)),
	new Block(60, 20, 20, 20, new Color(0, 75, 255), 2, 1),
	new Block(100, 60, 20, 20, new Color(255, 75, 0), 1, 2),
	new Block(0, 40, 20, 20, new Color(255, 0, 75), 2, 2),
	new Block(60, 20, 20, 20, new Color(0, 255, 75), 3, 1),
	new Block(100, 60, 20, 20, new Color(0, 255, 255), 3, 2),
	new Block(0, 40, 20, 20, new Color(255, 100, 100), 2, 3)
];

async function main() {
	window = showWindow();
	drawingArea = createDrawingArea();

	window.addChild(drawingArea);

	while (true) {
		await sleep(1000 / 60);
		update();
		window.invalidate();
	}
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

function update() {
	for (let block of blocks) {
		block.update();

		if (block.right >= drawingArea.width) {
			block.speed.x = -Math.abs(block.speed.x);
		} else if (block.left <= 0) {
			block.speed.x = Math.abs(block.speed.x);
		}
		
		if (block.bottom >= drawingArea.height) {
			block.speed.y = -Math.abs(block.speed.y);
		} else if (block.top <= 0) {
			block.speed.y = Math.abs(block.speed.y);
		}
	}
}

function draw(context) {
	for (let block of blocks) {
		context.setColor(block.color.r, block.color.g, block.color.b);
		context.rect(block.position.x, block.position.y, block.width, block.height);
		context.fill();
	}
}

await main();