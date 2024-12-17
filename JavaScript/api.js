const URL = "https://cat-fact.herokuapp.com/facts";
const btn = document.querySelector(".btn");
const factPara = document.querySelector(".facts");

const getFacts= async() =>{
    console.log("getting data....");
    let response = await fetch(URL);
    console.log(response);
    let data = await response.json();
    factPara.innerText = data[0].text;
};

btn.addEventListener("click",getFacts);