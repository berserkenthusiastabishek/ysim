# Purpose
This is an educational project i've taken up to ramify my learnings in computer architecture from [_Computer Systems : A Programmer's Perspective_](//https://csapp.cs.cmu.edu/). The project will center around Y86-64, a subset of x86-64 (with more RISC-like features like load/store) as detailed in the book itself. I chose this ISA because of some design choices like condition codes that I like, and some RISC ideas like load/store that I also prefer. 
# Plans
I aim to write an assembler for the ISA in C++, and an implementation of a simple pipelined processor as detailed in the text. Preferably, I would implement the processor in a HDL like Verilog, though a C++ implementation could also manifest due to a lack of time lol.  
Currently, a rudimentary assembler is being developed, I will start on the processor after.  
I plan on rewriting the assembler in Rust in the future (time permitting), just to spite C++'s exceptionally bad exception handling system.