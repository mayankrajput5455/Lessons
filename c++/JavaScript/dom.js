// console.log(window.document);
// let ques=document.getElementById("Ques");
// console.dir(ques);
// let answer=document.getElementsByClassName("Answer");
// console.dir(answer); 
// let question=document.querySelector("#Ques");
// console.dir(question);
// let ans=document.querySelectorAll(".Answer");
// console.dir(ans);

// //ques

// let h2=document.querySelector("h2");
// console.dir(h2.innerText);
// h2.innerText=h2.innerText + " from Apna College Student";
// console.dir(h2.innerText);

// //ques

// let boxes=document.querySelectorAll(".box")
// let idx=1;
// for(box of boxes){
//     box.innerText = `new unique value ${idx}`;
//     idx++;
// }

// //Attributes

// let att=document.querySelector("h2");
// console.log(att.getAttribute("class"));
// console.log(att.setAttribute("class", "123"));

// //Style Access

// let div=document.querySelector("div");
// console.dir(div.style);
// div.style.backgroundColor = "green";
// div.style.fontFamily = "arial"

//Insert Element

// let newBtn = document.createElement("button");
// newBtn.innerText="click me!";
// console.log(newBtn);
// let div = document.querySelector("div");
// div.append(newBtn);


// let newHeading = document.createElement("h1");
// newHeading.innerHTML = "<i>Hi, I am New</i>";
// document.querySelector("body").prepend(newHeading);
 

//Delete Element

// let paragraph = document.querySelector("p");
// paragraph.remove();

//ques

let newBtn = document.createElement("button");
newBtn.innerText = "click me!";

newBtn.style.color = "white";
newBtn.style.backgroundColor = "red";
document.querySelector("body").prepend(newBtn);

//ques

let para =document.querySelector("p");
para.classList.add("newClass");






