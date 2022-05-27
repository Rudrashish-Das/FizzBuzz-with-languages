import * as FizzBuzz from "./fizzbuzz.js";

document.getElementById("submit")
    .onclick = () => {
        try{
            document.getElementsByName("input_num")
                .forEach(element => {
                    if(element.checked){
                        if(element.value == "lower_upper"){
                            FizzBuzz.fizzBuzz({
                                'lower': parseInt(document.getElementById("lowerBox").value),
                                'upper': parseInt(document.getElementById("upperBox").value),
                                'range-256': 1,
                            });
                        }
                        else{
                            FizzBuzz.fizzBuzz();
                        }
                    } 
                });
        }
        catch(err){
            console.log("An unexpected error occoured!\nPlease check your input and try again.");
        }
    };