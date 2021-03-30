import { Window, Button } from "mosaic/presentation";
import { Debug } from "mosaic/diagnostics";
import { sleep } from "lib/utils.js";

async function main() {
	const window = showWindow();
	await loopTitles(window);
	window.addChild(createButton());
}

function showWindow() {
	const window = new Window("Title", 600, 400);
	window.show();
	return window;
}

function createButton() {
	const button = new Button("Hello world!");
	button.onClick = () => Debug.log("Button clicked");
	return button;
}

async function loopTitles(window) {
	const titles = ["Window title", "Another title", "Título do caraio", "I've ran out of window titles"];

	for (let title of titles) {
		await sleep(1000);
		window.title = title;
	}
}

await main();