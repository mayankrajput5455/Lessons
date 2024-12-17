function myFunction(){
    console.log("Welcome to javaScript");
    console.log("I Love JS");
}
myFunction();

function sum(x,y){
    sum=x + y;
    return sum;
}
console.log(sum(3,9));

//arrowFunction

const arrowMul= (a,b)=> {
    return a * b;
}
console.log(arrowMul(5,5));

//ques

function countVowel(str){
    let count=0;
    for(const char of str){
    vowel=["a","e","i","o","u","A","E","I","O","U"];
    for(let i=0;i<vowel.length;i++){
    if(char==vowel[i]){
        count++;
    }
    }
    }
    return count;
}
console.log(countVowel("Mayank"));

//forEach loop in array

let arr=[1,2,,3,4,5];
arr.forEach(function printVal(val){
    console.log(val);
})

//ques
let nums=[1,2,3,4,5];
nums.forEach((num) =>{
    console.log(num**2);
})

let list=["pune","delhi","mumbai"];
list.forEach((val)=>{
    console.log(val.toUpperCase());
})
 

//ques
let marks=[87,93,64,99,86,91];
let topper = marks.filter((val)=>{
    return val > 90;
})
console.log(topper);