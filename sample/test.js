import { Window } from "mosaic/presentation";
import { Debug } from "mosaic/diagnostics";
import { sleep } from "lib/utils.js";

// Instantiate window
const window = new Window("A window", 600, 400);

// Just for fun
Debug.log("Showing window!");

// Show it!
await window.show();

// Listen to clicks
window.onClick = () => {
	Debug.log("Button 1 clicked!");
	window.width += 20;
};

// Wait a little bit
await sleep(1000);

// Let 'em know
Debug.log("Showing another window! :3");

// Create and show another window
const anotherWindow = new Window("Another window", 300, 300);
anotherWindow.resizable = false;
anotherWindow.onClick = () => Debug.log("Button 2 clicked!");
await anotherWindow.show();