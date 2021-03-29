import { Window } from "mosaic/presentation";
import { Debug } from "mosaic/diagnostics";
import { sleep } from "lib/utils.js";

const window = new Window("Title", 600, 400);
window.show();

const titles = ["Window title", "Another title", "Título do caraio", "I've ran out of window titles"];

window.minHeight = 300;
window.minWidth = 200;

Debug.log(window.minHeight, window.minWidth);

for (let title of titles) {
	await sleep(1500);
	window.title = title;
}