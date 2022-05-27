#ifndef LIMITS_H
#define LIMITS_H
    #include <limits.h>
#endif

/* Runs from lower to upper. */
void fizzBuzz_full(unsigned long lower, unsigned long upper){
    while(lower++ <= upper){
        if(!((lower-1) % 15)){
            printf("FizzBuzz\n");
            continue;
        }
        if(!((lower-1) % 3)){
            printf("Fizz\n");
            continue;
        }
        if(!((lower-1) % 5)){
            printf("Buzz\n");
            continue;
        }
        printf("%u\n",lower - 1);
    }
}

/* Runs from 1 to ULONG_MAX. */
void fizzBuzz(void){
    fizzBuzz_full(1,ULONG_MAX);
}

/* Runs from 1 to upper. */
void fizzBuzz_upp(unsigned long upper){
    fizzBuzz_full(1,upper);
}