#include<stdio.h>
int main()
{
    int score[]={61,23,38,56,78,32,45,78,3,42};
    int i,sum=0;
    for(i=0;i<10;i++)
        sum+=score[i];
    printf("sum=%d\n",sum);//sum=456
    return 0; 
}