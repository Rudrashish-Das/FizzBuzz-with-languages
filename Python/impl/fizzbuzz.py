import platform
import sys

class FizzBuzz:

    def __init__(self):
        platform.architecture()

    # Runs from lower to upper. By default upper = sys.maxsize and lower = 1
    def fizzBuzz(self, upper = sys.maxsize, lower = 1):
        if upper < lower: raise Exception("upper is less than lower!")

        while lower <= upper:
            lower+=1
            if (lower - 1) % 15 == 0:
                print("FizzBuzz")
                continue
            if (lower - 1) % 3 == 0:
                print("Fizz")
                continue
            if (lower - 1) % 5 == 0:
                print("Buzz")
                continue
            print(lower-1)