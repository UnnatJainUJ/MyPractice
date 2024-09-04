const express = require("express");
const fs = require("fs");

const users = require("./MOCK_DATA.json");

const app = express();
const PORT = 8000;

// Middleware - Plugins
app.use(express.urlencoded({ extended: false }));

// Middleware created
app.use((req, res, next) => {
  console.log("Hello from middleware 1");
  // return res.json({ msg: "Hello from 1" });
  next();
});

app.use((req, res, next) => {
  console.log("Hello from middleware 2");
  // return res.end("Hey");
  next();
});

// Routes
app.get("/api/users", (req, res) => {
  return res.json(users);
});

app.get("/users", (req, res) => {
  const html = `
<ul>
${users.map((user) => `<li>${user.first_name} </li>`).join("")}
</ul>`;
  res.send(html);
});

app
  .route("/api/users/:id")
  .get((req, res) => {
    const id = Number(req.params.id);
    const user = users.find((user) => user.id === id);
    return res.json(user);
  })
  .patch((req, res) => {
    // Edit user with Id
    return res.json({ status: "Pending" });
  })
  .delete((req, res) => {
    const id = Number(req.params.id);
    const user = users.find((user) => user.id === id);
    users.pop(user);
    // fs.writeFile()
    fs.writeFile("./MOCK_DATA.json", JSON.stringify(users), (err, data) => {
      return res.json({ status: "Success" });
    });
    // return res.json({ status: "Pending" });
  });

app.post("/api/users", (req, res) => {
  const body = req.body;
  // console.log(body);
  users.push({ ...body, id: users.length + 1 });
  fs.writeFile("./MOCK_DATA.json", JSON.stringify(users), (err, data) => {
    return res.json({ status: "Success", id: users.length });
  });
  // return res.json({ status: "Pending" });
});

app.listen(PORT, () => {
  console.log("Huehue");
});
