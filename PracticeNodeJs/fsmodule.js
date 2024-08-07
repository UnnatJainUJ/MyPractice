const fs = require("fs");

// fs.readFile('tut1.txt' , 'utf8' , (err, data) =>{console.log(err,data)})

// const a = fs.readFileSync('tut1.txt');
// console.log(a.toString());

// fs.writeFile('file2.txt' , "This is a data " , ()=>{console.log("Written in file")})

// console.log("Finished reading file")

b = fs.writeFileSync("file2.txt", "This is new 2 data");
console.log(b);
console.log("Finished reading file");
