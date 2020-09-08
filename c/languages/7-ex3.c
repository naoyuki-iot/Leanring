#include <stdio.h>
int main()
{
    int a[4],i;
    int *pa;
    pa=a;
    for(i=0;i<4;i++)
        *pa++=1000+i;
    pa=a;
    for(i=0;i<4;i++)
    {
        printf("a[%d]=%d pa=%d\n",i,*pa,pa);
        ++pa;
    }
    return 0;
}