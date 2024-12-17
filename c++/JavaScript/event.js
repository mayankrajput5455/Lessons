// let btn = document.querySelector(".btn1");
// btn.onclick = () => {
//     console.log("btn was clicked");
//     let a = 25;
//     a++;
//     console.log(a);
// };
// let div = document.querySelector(".box1");
// div.onmouseover = () => {
//     console.log("you are inside div");
// };

// let btn = document.querySelector(".btn1");
// btn.onclick = (evt) => {
//     console.log(evt);
//     console.log(evt.type);
//     console.log(evt.target);
//     console.log(evt.ClientX, evt.clientY);
// };

// const handler1 = () =>{
//      console.log("This is handler1");
// };
// btn.addEventListener("click", handler1);

// btn.addEventListener("click", () =>{
//     console.log("This is handler2");
// });
// btn.removeEventListener("click",handler1);

//Dark and Light MOde Ques

let modeBtn = document.querySelector(".mode");
let currMode = "light";
modeBtn.addEventListener("click", () =>{
    if(currMode === "light"){
        currMode = "dark";
        document.querySelector("body").style.backgroundColor="black";
    }else{
        currMode = "light";
        document.querySelector("body").style.backgroundColor="white";
    }
    console.log(currMode);
});