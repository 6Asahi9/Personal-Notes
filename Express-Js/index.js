const express = require('express');
const app = express();

app.set("view engine", "ejs");

app.set('views', './views');

app.use(express.static('./Public')) 

app.get('/', function (req, res) {
  res.render('index');
});

