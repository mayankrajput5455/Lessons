let obj = {
    item:"pen",
    price: 10,
};
console.log("the cost of",obj.item,"is",obj.price,"rupees");
//OR Templete literal
output = `the cost of ${obj.item} is ${obj.price} rupees`;
console.log(output); 

//String methods
let str = "Apna College";
str1 = str.toUpperCase();
str2 = str.toLowerCase();
str3 = str.trim();
str4 = str.slice(0,5);
str5 = str1.concat(str2);
str6 = str.replace("A","Sa");
str7 = str.charAt(5);
console.log(str1,"\t", str2, "\t" ,str3, "\t", str4, "\n",str5,"\t",str6,"\t",str7);
