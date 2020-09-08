#include<stdio.h>
//ASCII code: convert int to char
/*int main()
{
    char a='A';
    int x=90;

    printf("%c %d\n",a,(int)a);//A 65
    printf("%c %d\n",(char)x,x);//Z 90
}*/

int main()
{
    int i;

    for(i=97;i<=122;i++)
        printf("%c: %d\n",(char)i,i);

    return 0;
}
