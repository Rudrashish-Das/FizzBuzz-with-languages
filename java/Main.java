import impl.FizzBuzz;

public class Main{
    public static void main(String[] args) {
        try{
            switch(args.length){
                case 0:
                    FizzBuzz.display();
                    break;
                case 1:
                    FizzBuzz.display(Long.parseLong(args[0]));
                    break;
                case 2:
                    FizzBuzz.display(Long.parseLong(args[0]),Long.parseLong(args[1]));
                    break;
                default:
                    System.out.println("Wrong Number of Arguments!\nProgramme exited abruptly.");
                    return;
            }
        }
        catch(Exception e){
            System.out.println("An error occurred!\nPlease check your inputs.");
        }
    }
}