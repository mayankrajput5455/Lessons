let marks = [97, 82, 75, 64, 36];
console.log(marks);

let superheroes = ["ironman", "thor", "hulk", "spiderman"];
for(let i=0;i<superheroes.length;i++){
    console.log(superheroes[i]);
}
let sum=0;
for(let val of marks){
    sum=sum+val;
}
    console.log(sum);

//Ques

let price = [250,645,300,900,50];
let i=0;
for(let val of price){
    offer=0.1*val;
    price[i]=price[i]-offer;
    console.log(price[i]);
    i++;
}


marks.splice(2,0,55);
console.log(marks);
console.log(marks.splice(2,2,122));
console.log(marks);


//ques

let companies = ["Bloomberg", "Microsoft", "Uber", "Google", "IBM", "Netflix"];
companies.shift();
console.log(companies);
companies.splice(1,1,"Ola");
console.log(companies);
companies.push("Amazon");
console.log(companies);