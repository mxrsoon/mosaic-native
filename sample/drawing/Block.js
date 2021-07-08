import { Color } from "./Color.js";
import { Vector2D } from "./Vector2D.js";

export class Block {
    /** @type {Vector2D} */
    position;

    /** @type {number} */
    width;

    /** @type {number} */
    height;

    /** @type {Vector2D} */
    speed;

    /** @type {Color} */
    color;

    constructor(x, y, width, height, color, xSpeed = 1, ySpeed = 1) {
        this.position = new Vector2D(x, y);
        this.width = width;
        this.height = height;
        this.color = color;
        this.speed = new Vector2D(xSpeed, ySpeed);
    }

    get top() { return this.position.y; }
    get right() { return this.position.x + this.width; }
    get bottom() { return this.position.y + this.height; }
    get left() { return this.position.x; }

    update() {
        this.position.x += this.speed.x;
        this.position.y += this.speed.y;
    }
}