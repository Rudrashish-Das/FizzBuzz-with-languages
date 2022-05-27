#include <iostream>
#include "impl/fizzbuzz.h"

int main(int argc, char const *argv[])
{
    try{
        switch(argc){
        case 1:
            fibuz::fizzBuzz();
            break;
        case 2:
            fibuz::fizzBuzz(std::stol(argv[1]));
            break;
        case 3:
            fibuz::fizzBuzz(std::stol(argv[1]),std::stol(argv[2]));
            break;
        default:
            std::cout<<"Wrong Number of Arguments!\nProgramme exited with return code 1.\n";
            return 1;
        }
    }
    catch(...){
        std::cout<<"An error occurred!\nPlease check your inputs.\n";
    }
    return 0;
}