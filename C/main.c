#include <stdio.h>
#include <stdlib.h>
#include "impl/fizzbuzz.h"

int main(int argc, char const *argv[]){
    switch(argc){
        case 1:
            fizzBuzz();
            break;
        case 2:
            fizzBuzz_upp(atoi(argv[1]));
            break;
        case 3:
            fizzBuzz_full(atoi(argv[1]),atol(argv[2]));
            break;
        default:
            printf("Wrong Number of Arguments!\nProgramme exited with return value 1.\n");
            return 1;
    }
    return 0;
}