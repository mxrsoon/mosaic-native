import { Person } from "./Person.js";
import { Debug } from "mosaic/diagnostics";

// Instantiate me! :3
const person = new Person(
	"Marlon Macedo",
	new Date(1999, 11, 20, 23, 58) // Month is index-based
);

Debug.log(person.toString());