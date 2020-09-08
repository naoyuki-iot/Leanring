#include<stdio.h>
int main()
{
    int i;
    int a[3] = { 1,2,3 };
    int *p = a;

    for (i = 0; i < 3; i++)
    printf("&a[%d] = %p     p + %d = %p\n", i, &a[i], i, p + i);
    
    return 0;
}
