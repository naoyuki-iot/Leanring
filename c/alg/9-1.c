#include<stdio.h>
int main()
{
    int data[]={4,7,8,2,4,5,9,5};
    int bucket[11];
    int i,j,n=8,m=11;

    for(i=0;i<m;i++)
        bucket[i]=0;

    for(i=0;i<n;i++)
        bucket[data[i]]++;

    //for(i=0;i<m;i++)//asc
    for(i=m-1;i>=0;i--)//desc
        for(j=0;j<bucket[i];j++)
        printf("%d ",i);
    printf("\n");
}