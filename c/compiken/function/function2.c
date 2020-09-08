#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
 
    else
    {
        return b;
    }
}

int main()
{
    int n1,n2;
    printf("二つの整数を入力してください\n");
    printf("整数1:"); scanf("%d",&n1);
    printf("整数2:"); scanf("%d",&n2);

    printf("大きいほうの値は%dです。\n",max(n1,n2));

    return 0;
}
