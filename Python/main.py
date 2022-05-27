import sys
from impl.fizzbuzz import FizzBuzz

def main():
    gameObject = FizzBuzz()
    
    try:
        match len(sys.argv):
            case 1:
                gameObject.fizzBuzz()
            case 2:
                gameObject.fizzBuzz(int(sys.argv[1]))
            case 3:
                gameObject.fizzBuzz(int(sys.argv[2]),int(sys.argv[1]))
    except:
        print("An unknown error occured!\nPlease check your inputs and try again.")

if __name__ == "__main__":
    main()