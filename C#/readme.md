# File Structure
```markdown
├── bin
│   |── fizzbuzz.dll
│   |── main(safe).exe
│   └── main.exe
└── src
   |── impl
   |   └── fizzbuzz.cs
   |── main(safe).cs
   └── main.cs
```
# Compile & Execute

I have used the [***Mono JIT compiler***](https://wiki.archlinux.org/title/mono) ***version 6.12.0***  for my tests.

>_**Note:** This already contains a prebuilt binary for your convenience_

To **compile**, run
>mcs -t:library -out:bin/fizzbuzz.dll src/impl/fizzbuzz.cs && mcs -reference:bin/fizzbuzz.dll -t:exe -out:bin/main.exe src/main.cs

To **execute**, run
>mono main.exe 1 1024

This will run the program for the range 1 to 1024. Alternatively you can simply write a single parameter which will run the program from 1 to whatever range specified.

>_***Warning:*** Running the code without any parameters might result in a crash as it attempts to run the program in the range **1 to UInt64.MaxValue.**_

>_**Note:** The safe binary provides a much safer implementation of the same program._