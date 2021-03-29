export class Person {
	constructor(name, birth) {
		this.name = name;
		this.birth = birth;
	}

	/** @type {string} */
	name;

	/** @type {Date} */
	birth;

	get age() {
		const now = new Date();
		let age = now.getFullYear() - this.birth.getFullYear();

		if (now.getMonth() < this.birth.getMonth()) {
			age--;
		} else if (now.getMonth() === this.birth.getMonth()) {
			if (now.getDate() < this.birth.getDate()) {
				age--;
			} else if (now.getDate() === this.birth.getDate()) {
				if (now.getHours() < this.birth.getHours()) {
					age--;
				} else if (now.getHours() === this.birth.getHours()) {
					if (now.getMinutes() < this.birth.getMinutes()) {
						age--;
					} else if (now.getMinutes() === this.birth.getMinutes()) {
						if (now.getSeconds() < this.birth.getSeconds()) {
							age--;
						} else if (now.getSeconds() === this.birth.getSeconds()) {
							if (now.getMilliseconds() < this.birth.getMilliseconds()) {
								age--;
							}
						}
					}
				}
			}
		}

		return age;
	}

	toString() {
		return `${this.name}, ${this.age}`;
	}

	toJSON() {
		return {
			name: this.name,
			birth: this.birth
		};
	}
}