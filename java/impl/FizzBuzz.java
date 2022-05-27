package impl;

/*Singleton class to impliment FizzBuzz*/
public class FizzBuzz{

    /* Runs from lower to upper. */
    public static void display(long lower, long upper){
        while(lower++ <= upper){
            if((lower-1) % 15 == 0){
                System.out.println("FizzBuzz");
                continue;
            }
            if((lower-1) % 3 == 0){
                System.out.println("Fizz");
                continue;
            }
            if((lower-1) % 5 == 0){
                System.out.println("Buzz");
                continue;
            }
            System.out.println(lower - 1);
        }
    }
    
    /* Runs from 1 to Long.MAX_VALUE. */
    public static void display(){
        display(1,Long.MAX_VALUE);
    }

    /* Runs from 1 to upper. */
    public static void display(long upper){
        display(1,upper);
    }
}