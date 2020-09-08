#include <stdio.h>
int main()
{
    int i;
    int max,min;
    int v[5]={1,3,2,4,5};

    max=min=v[0];
    for(i=1;i<5;i++)
    {
        if(v[i]>max)max=v[i];
        if(v[i]<min)min=v[i];
    }
    printf("max=%d\n",max);
    printf("min=%d\n",min);

    return 0;
}
