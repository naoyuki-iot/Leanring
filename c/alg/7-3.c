#include<stdio.h>
int main()
{
    int data[]={4,3,7,8,1,5,6,2};
    int i,j,n=8;
    int temp;

    for(i=0;i<n;i++)
    {
            for(j=0;j<n-1-i;j++)
            //if(data[j]<data[j+1])//desc:降順
            if(data[j]>data[j+1])//asc:昇順
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }

    }
        for(i=0;i<n;i++)
            printf("%d",data[i]);
        printf("\n");
    
    return 0;
}