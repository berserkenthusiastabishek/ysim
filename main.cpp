#include "./include/assembler.h"
#include <iostream>

int main(int argc, char**argv)
{
    if(argc != 2)
    {
        std::cerr<<"ERROR : proper number of arguments not specified";
        return -1;
    }
    Assembler assembler = Assembler(std::string(argv[1]));
    assembler.assemble();
    assembler.print_instructions();
    assembler.print_machine_instructions();
    return 0;
}