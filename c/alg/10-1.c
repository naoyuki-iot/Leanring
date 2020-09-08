#include<stdio.h>
int kaijo(int n)
{
    if(n<=0)//diff
        return 0;//diff
    
    if(n==1)
        return 1;

    else
        return n*kaijo(n-1);
}
int main()
{
    int i=kaijo(-1);
    printf("%d\n",i);
}