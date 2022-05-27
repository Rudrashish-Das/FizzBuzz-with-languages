# File Structure
```markdown
├── impl
│   └── FizzBuzz.java
└── Main.java
```
# Compile & Execute

I have used the ***JDK version 17.0.1*** for my tests.

To **compile**, run
> javac Main.java 

To **execute**, run
>java Main 1 1024

This will run the program for the range 1 to 1024. Alternatively you can simply write a single parameter which will run the program from 1 to whatever range specified.

>_***Warning:*** Running the code without any parameters might result in a crash as it attempts to run the program in the range **1 to Long.MAX_VALUE.**_
