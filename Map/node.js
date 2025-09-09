console.log("hello world ");
const http = require("http");
let a = 3;
let b = 4;
console.log(a  + b);
const server = http.createServer((req, res) => {
    console.log(req);

});
const port = 3000;
server.listen( port, () => {
    console.log('server running at http://localhost:${port} ');
});