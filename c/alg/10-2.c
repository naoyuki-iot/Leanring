#include<stdio.h>
int sum(int data[],int n)//約2n回
{
    int data1[1000],data2[1000];
    int i;

    if(n==1)
        return data[0];

    for(i=0;i<n/2;i++)
        data1[i]=data[i];

    for(i=n/2;i<n;i++)
        data2[i-n/2]=data[i];

    return sum(data1,n/2)+sum(data2,n-n/2);
}