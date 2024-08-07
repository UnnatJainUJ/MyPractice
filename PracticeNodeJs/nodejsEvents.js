const EventEmitter = require("events");

class MyEmitter extends EventEmitter {}

const myEmitter = new MyEmitter();
myEmitter.on("Waterfall", () => {
  console.log("Turn off the motor");
  setTimeout(() => {
    console.log("Please turn off the motor");
  }, 3000);
});

myEmitter.emit("Waterfall");
