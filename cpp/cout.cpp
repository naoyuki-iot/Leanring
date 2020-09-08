#include <stdio.h>
#include <iostream>

int main()
{
    const char *str1="Hello";
    const char *str2="World";
    int number=10;

    printf("%s %s %d\n",str1,str2,number);
    std::cout << str1 << " " << str2 << " " << number << "\n";
    getchar();
}