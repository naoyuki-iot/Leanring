#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    
    else
    return b;
}

int main()
{
    printf("%d\n",max(2,3));
    return 0;
}
