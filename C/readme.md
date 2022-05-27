# File Structure
```markdown
├── impl
│   └── fizzbuzz.h
└── main.c
```
# Compile & Execute

I have used the **GCC version 12.1.0** compiler for my tests.

To **compile**, run
> gcc main.c -o fizzbuzz 

To **execute**, run
>./fizzbuzz 1 1024 

This will run the program for the range 1 to 1024. Alternatively you can simply write a single parameter which will run the program from 1 to whatever range specified.

>_***Warning:*** Running the code without any parameters might result in a crash as it attempts to run the program in the range **1 to ULONG_MAX.**_