#include<stdio.h>
void set(int v[], int n, int val)
{
    int i;
    for (i = 0; i < n; i++)v[i] = val;
}

int main()
{
    int i;
    int a[] = { 1,2,3 };

    set(a, 3, 99);

    for (i = 0; i < 3; i++)
    printf("a[%d] = %d\n", i, a[i]);

    return 0;
}
