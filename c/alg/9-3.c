#include<stdio.h>
int main()
{
    int data[]={5,7,8,2,4,5,9,5};
    int bucket[11],ruiseki[11];
    int i,j,n=8,m=11;

    for(i=0;i<m;i++)
        bucket[i]=ruiseki[i]=0;
    
    for(i=0;i<n;i++)
        bucket[data[i]]++;

    ruiseki[m-1]=bucket[m-1];//diff
    for(i=m-2;i>=0;i--)//diff
        ruiseki[i]=ruiseki[i+1]+bucket[i];//diff

    for(i=m-1;i>=0;i--)//diff
    {
        if(bucket[i]!=0)
        {
            if(i==m-1)//diff
                printf("rank 1:");
            else
                printf("rank %d:",ruiseki[i+1]+1);
            for(j=0;j<bucket[i];j++)
                printf("%d ",i);
            printf("\n");
        }
    }
    return 0;
}