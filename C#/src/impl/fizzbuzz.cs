namespace FizzBuzz {
    public class FizzBuzzSingleton{
        public void Display(ulong upper = System.UInt64.MaxValue, ulong lower = 1){
            if(upper < lower) throw new System.Exception("upper is less than lower!");

            while(lower++ <= upper){
                if((lower-1) % 15 == 0){
                    System.Console.WriteLine("FizzBuzz");
                    continue;
                }
                if((lower-1) % 3 == 0){
                    System.Console.WriteLine("Fizz");
                    continue;
                }
                if((lower-1) % 5 == 0){
                    System.Console.WriteLine("Buzz");
                    continue;
                }
                System.Console.WriteLine(lower-1);
            }            
        }

        public void DisplaySafe(ulong upper = 1024, ulong lower = 1){
            Display(upper,lower);
        }
    }
}