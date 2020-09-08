#include <stdio.h>
int main()
{
    struct xyz
    {
        int i,j;
    };
    struct xyz abc,*pabc;
    pabc = &abc;
    pabc -> i=10;
    pabc -> j=20;
    printf("abc.i=%d abc.j=%d\n",pabc->i,pabc->j);
    return 0;
}