#include<stdio.h>
void power(int a,int *a2)
{
    *a2=a*a;
}

int main()
{
    int n,n2;
    printf("input number:");
    scanf("%d",&n);
    power(n,&n2);
    printf("%d^2=%d\n",n,n2);

    return 0;
}