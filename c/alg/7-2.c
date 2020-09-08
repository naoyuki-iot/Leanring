#include<stdio.h>
int main()
{
    int data[]={4,3,7,8,1,5,6,2};
    int i,j,n=8;
    int maxNumber,temp;

    for(i=0;i<n;i++)
    {
        maxNumber=i;
        for(j=i+1;j<n;j++)
        //if(data[j]>data[maxNumber])//max
        if(data[j]<data[maxNumber])//min
            maxNumber=j;

        temp=data[i];
        data[i]=data[maxNumber];
        data[maxNumber]=temp;

    }

    for(i=0;i<n;i++)
        printf("%d",data[i]);
    printf("\n");
        return 0;
}