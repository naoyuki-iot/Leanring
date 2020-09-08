#include<stdio.h>
int main()
{
    int a,x;
    int *pa;
    a=100; pa=&a;
    printf("address=%x\n",pa);

    x=*pa;
    printf("data:a=%d x=%d\n",a,x);
    return 0;
}