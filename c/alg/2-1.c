#include<stdio.h>
int main()
{
    int x=7,y=5,temp;//(1),(2)
    printf("x=%d,y=%d\n",x,y);//(3)

    temp=x;//(4)
    x=y;//(5)
    y=temp;//(6)

    printf("x=%d,y=%d\n",x,y);//(7)
    return 0; 
}