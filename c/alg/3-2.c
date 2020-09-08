#include<stdio.h>
int main()
{
    int data[100];
    int dataNumber=0;
    int inputData,i;//input:5,7,3,0,6,0,0,1 answer:5 1

    while(1){
        scanf("%d",&inputData);
        if(inputData==0)
        dataNumber--;
        else
        data[dataNumber++]=inputData;

        for(i=0;i<dataNumber;i++)
            printf("%d ",data[i]);
        printf("\n");
    }
    return 0; 
}