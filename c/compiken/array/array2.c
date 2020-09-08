#include <stdio.h>
int main(){
    int i;
    int temp;
    int v[5]={1,2,3,4,5};

    for(i=0;i<2;i++)
    {
        temp=v[i];
        v[i]=v[4-i];
        v[4-i]=temp;
    }

    for(i=0;i<5;i++)
    printf("v[%d]=%d\n",i,v[i]);

    return 0;
}
