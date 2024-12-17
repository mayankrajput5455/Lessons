const employee ={
    calcTax() {
        console.log("tax is 10%");
    },
};

const karanArjun ={
    salary: 50000,
    calcTax(){
        console.log("tax is 20%");
    },
};

karanArjun__proto__=employee;


//ques

let data = "secert Info";
class user {
    constructor(name, email){
        this.name = name;
        this.email = email;
    }
    viewData(){
        console.log(data);
    }
};
class Admin extends user{
    constructor(name, email){
        super(name, email);
    }
}
let student1 = new user("Mayank Singh", "mayankrajput5455@gmail.com");
let student2 = new user("Shradha khapra", "shradha@gmail.com");

let Admin1 = new Admin("Dean", "gurukuladmin@gmail.com");