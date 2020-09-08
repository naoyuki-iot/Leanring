#include <stdio.h>
#include <iostream>

int main()
{
    std::cout << "ABCDE\n";
    
    //buffer flush
    std::cout << "ABCDE\n" << std::flush;
    
    //buffer return
    std::cout << "ABCDE\n" << std::endl;
    
    getchar();
}