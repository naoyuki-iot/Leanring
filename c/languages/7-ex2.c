#include<stdio.h>
int main()
{
    int a[4],i;
    for(i=0;i<4;i++)
    {
        a[i]=i*10;
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}