#include<stdio.h>
int main()
{
    char mozi[100];
    char boin[5]="aiueo";
    int i,j,counter=0;

    printf("input char:");
    scanf("%s",mozi);

    for(i=0;i<5;i++)
        for(j=0;mozi[j]!='\0';j++)
            if(mozi[j]==boin[i])
            counter++;

    printf("boin:%d\n",counter);
    return 0;
}