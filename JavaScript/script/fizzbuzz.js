export async function fizzBuzz(optionalInput){
    let lower = 1;
    let upper = Number.MAX_VALUE;

    if(optionalInput){
        if(optionalInput['range-256']) upper = optionalInput['range-256'] * 256; 
        if(optionalInput['upper']) upper = optionalInput['upper'];  
        if(optionalInput['lower']) lower = optionalInput['lower']; 
    }

    while(lower++ <= upper){
        if((lower-1) % 15 == 0){
            console.log("FizzBuzz\n");
            continue;
        }
        if((lower-1) % 3 == 0){
            console.log("Fizz\n");
            continue;
        }
        if((lower-1) % 5 == 0){
            console.log("Buzz\n");
            continue;
        }
        console.log(lower-1 + "\n");
    }
}