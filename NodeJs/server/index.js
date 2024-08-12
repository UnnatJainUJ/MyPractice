const http = require("http");
const fs = require("fs");
const url = require("url");

myServer = http.createServer((req, res) => {
  if (req.url === "/favicon.ico") return res.end();
  // console.log("New req rec", req.headers);
  const log = `${Date.now()} :${req.url} New Req Rec\n`;

  const myUrl = url.parse(req.url, true);
  console.log(myUrl);
  fs.appendFile("log.txt", log, (err, data) => {
    switch (myUrl.pathname) {
      case "/":
        res.end("Hello from server huehue");
        break;

      case "/about":
        const userName = myUrl.query.myName;
        res.end(`Hi ${userName}`);
        break;

      default:
        res.end("404 Not FOund");
    }
  });
});

myServer.listen(8000, () => {
  console.log("Server started.");
});
