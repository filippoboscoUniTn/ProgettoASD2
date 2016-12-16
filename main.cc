var express = require('express')
var pug = require('pug')

var app = express();

app.set('views','./views')
app.set('view engine',pug)
app.set('port', (process.env.PORT || 5000));

app.get('/',function(req,res){


	//var text = 'Hello world';
    
	//res.writeHead(200, {'Content-Type': 'text/html'});
    //res.end(text);
  	
	res.render('index.pug',{title : 'Hello', message : 'Welcome to my first heroku application'})

})
app.listen(app.get('port'),function(){
	console.log("app running on port : ", app.get('port'))
})