// Promise

// let promise = new Promise((resolve,reject) =>{
//     console.log("I am Promise");
//     // resolve("Succes");
//     reject("Some Error Occured");
// });

// function getData(dataId, getNextData){
//     return new Promise ((resolve, reject) =>{
//         setTimeout(()=>{
//             console.log("data",dataId);
//             resolve("success");
//             if (getNextData){
//                 getNextData();
//             }
//         },5000)
//     });
// };

// function asyncFunc(){
//     return new Promise((resolve, reject) =>{
//         setTimeout(() => {
//             console.log("data1");
//             resolve("success");
//         },4000);
//     });
// }
// console.log("fetching data1......");
// let p1 = asyncFunc();
// p1.then((res)=>{
//     console.log(res);
// });

function asyncFunc1(){
    return new Promise((resolve, reject) =>{
        setTimeout(() => {
            console.log("data1");
            resolve("success");
        },4000);
    });
}
function asyncFunc2(){
    return new Promise((resolve, reject) =>{
        setTimeout(() => {
            console.log("data2");
            resolve("success");
        },4000);
    });
}
console.log("fetching data1......");
    let p1 = asyncFunc1();
    p1.then((res)=>{
    console.log("fetching data2......");
    let p2 = asyncFunc2();
    p2.then((res)=>{    
});
});