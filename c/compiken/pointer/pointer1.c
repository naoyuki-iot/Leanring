#include <stdio.h>
int main()
{
    int n;
    double x;
    int a[3];
    
    printf("n:%p\n", &n);
    printf("x:%p\n", &x);
    printf("a[0]:%p\n", &a[0]);
    printf("a[1]:%p\n", &a[1]);
    printf("a[2]:%p\n", &a[2]);
    
    return 0;
}
