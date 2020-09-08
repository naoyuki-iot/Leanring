#include <stdio.h>
int max(int a,int b,int c)
{
    int m=a;
    if(b>m)m=b;
    if(c>m)m=c;

    return m; 
}

int main()
{
    int a,b,c;

    printf("三つの整数を入力してください\n");
    printf("整数a"); scanf("%d",&a);
    printf("整数b"); scanf("%d",&b);
    printf("整数c"); scanf("%d",&c);
    printf("最大値は%dです。\n",max(a,b,c));

    return 0;
}
