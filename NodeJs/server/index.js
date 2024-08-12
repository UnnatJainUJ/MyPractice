const http = require("http");
const fs = require("fs");

myServer = http.createServer((req, res) => {
  // console.log("New req rec", req.headers);
  const log = `${Date.now()} : New Req Rec\n`;
  fs.appendFile("log.txt", log, (err, data) => {
    res.end("Hello from server huehue");
  });
});

myServer.listen(8000, () => {
  console.log("Server started.");
});
