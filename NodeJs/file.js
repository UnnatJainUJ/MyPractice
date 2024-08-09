const fs = require("fs");

//Synchromous call
// fs.writeFileSync('./test.txt' , "Hey there");

// Async
// fs.writeFile("./test2.txt", "Hello world async", (err) => console.log(err));

// const result = fs.readFile("./notes.txt", "utf-8", (err, res) => {
//   if (err) {
//     console.log("Error :", err);
//   } else {
//     console.log(res);
//   }
// });
// console.log(result);


fs.appendFileSync("./test.txt" , new Date().getDate().toLocaleString())