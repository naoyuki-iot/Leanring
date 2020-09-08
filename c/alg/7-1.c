#include<stdio.h>
int main()
{
    int data[]={4,3,7,8,1,5,6,2};
    int i,n=8;
    int maxNumber=0;

    for(i=1;i<n;i++)
    //if(data[i]>data[maxNumber])//max
    if(data[i]<data[maxNumber])//min
        maxNumber=i;

    printf("max=%d\n",data[maxNumber]);
}