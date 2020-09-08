#include<stdio.h>
int main()//binary heep :data[488]=548
{
    int data[1000];
    int indexNumber=0;
    int inputData,i,x=60;

    for(i=0;i<1000;i++)
    data[i]=x+i;

    while(indexNumber<1000)
    {
        printf("data[%d]=%d\n",indexNumber,data[indexNumber]);
        scanf("%d",&inputData);

        if(inputData==0)
            indexNumber=indexNumber*2+1;
        else
            indexNumber=indexNumber*2+2;
        
    }
}