import { Person } from "./Person.js";
import { Debug } from "mosaic/diagnostics";
import { a, get, set } from "./variable.js";

// Instantiate me! :3
const person = new Person(
	"Marlon Macedo",
	new Date(1999, 11, 20, 23, 58) // Month is index-based
);

Debug.log(Debug.constructor.toString());

Debug.log("b");
const dbg2 = Debug.constructor();
dbg2.log(dbg2.constructor.toString());

Debug.log(person.toString());