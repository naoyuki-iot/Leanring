#include<stdio.h>
int main()
{
    int data[]={5,7,8,2,4,5,9,5};
    int bucket[11],ruiseki[11];
    int i,j,n=8,m=11;

    for(i=0;i<m;i++)
    if(bucket[i]!=0)
        bucket[i]=ruiseki[i]=0;

    for(i=0;i<n;i++)
        bucket[data[i]]++;

    ruiseki[0]=bucket[0];
    for(i=1;i<m;i++)
        ruiseki[i]=ruiseki[i-1]+bucket[i];

    for(i=0;i<m;i++)
    {
        if(bucket[i]!=0)//diff
        {
            if(i==0)//diff
                printf("rank 1:");//diff
            else //diff
                printf("rank %d:",ruiseki[i-1]+1);
            for(j=0;j<bucket[i];j++)
                printf("%d ",i);
            printf("\n");
        }   
    }
    printf("\n");

}