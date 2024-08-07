const express = require('express');
const app = express();
const path = require('path');

const port = 3000;

app.use(express.static(path.join(__dirname,"public")))

app.get('/hello/:namehue' , (req , res) => {
  res.send('Hello World ' + req.params.namehue)
})
app.get('/about' , (req , res) => {
  // res.sendFile(path.join(__dirname , 'index.html'))
  res.json({"Harry":34})

})

app.listen(port , ()=>{
  console.log(`App listening at localhost port ${port}`)
})