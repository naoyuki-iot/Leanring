#include<stdio.h>
int main()
{
    int data[]={55,23,78,91,75,24,77,32,72,34};
    int i,j,n=10;
    int temp;

    for(i=0;i<n;i++)
    {
        printf("i=%d: ",i);

            for(j=0;j<n-1-i;j++)
            {
                printf("j=%d ",j);
                //if(data[j]<data[j+1])//desc:降順
                if(data[j]>data[j+1])//asc:昇順
                {
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                }   
            }
            printf("\n");
    }
    

        for(i=0;i<n;i++)
            printf("%d ",data[i]);
        printf("\n");
    
    return 0;
}