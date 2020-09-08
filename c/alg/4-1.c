#include<stdio.h>
int main()
{
    int data[1000];
    int topNumber=0;
    int dataNumber=0;
    int inputData,i;// input:5,7,3,0,6,0,0,1 answer:6 1

    while(1){
        scanf("%d",&inputData);
        if(inputData==0)
        {
            dataNumber--;
            topNumber++;
        }
        else
        {
            data[topNumber+dataNumber]=inputData;
            dataNumber++;
        }
        for(i=0;i<dataNumber;i++)
            printf("%d ",data[topNumber+i]);
            printf("\n");
    }
    return 0;
}