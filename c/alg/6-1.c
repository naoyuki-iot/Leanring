#include <stdio.h>
int main()
{
    int inputNumber,hushNumber;
    printf("inputNumber:");
    scanf("%d",&inputNumber);

    hushNumber=inputNumber%5;//h(k)=k mod 5

    printf("hushNumber:");
    printf("%d\n",hushNumber);
    return 0;
}