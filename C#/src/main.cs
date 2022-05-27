using System;
using FizzBuzz;

public class MyMainClass {
    static int Main(string[] args) {
        try{
            FizzBuzzSingleton fizzBuzz = new FizzBuzzSingleton();
            switch(args.Length){
                case 0:
                    fizzBuzz.Display();
                    break;
                case 1:
                    fizzBuzz.Display(Convert.ToUInt64(args[0]));
                    break;
                case 2:
                    fizzBuzz.Display(Convert.ToUInt64(args[1]),
                                    Convert.ToUInt64(args[0]));
                    break;
                default:
                    Console.WriteLine("Wrong Number of Arguments!\nProgramme exited with return code 1.");
                    return 1;
            }
        }
        catch(Exception){
            Console.WriteLine("An error occurred!\nPlease check your inputs.");
        }

        return 0;
    }
}