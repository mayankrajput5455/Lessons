// const sum =(x,y) =>{
//     return x+y;
// }
// sum(2,4);


// arr = [1,2,3,4,5];
// arr.forEach((val)=>{
//     console.log(val);
// });

let box = document.querySelector("div");
let btn = document.querySelector("button");
// console.dir(box); //object
// console.log(btn); //html code

console.log(box.innerText);
console.log(box.innerHtml);

box.append(" no.1");
console.log(box);

box.prepend("I am saying : ");
console.log(box);

