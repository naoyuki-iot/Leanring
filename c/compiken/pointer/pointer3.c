#include<stdio.h>
void s_d(int n1, int n2, int* sum, int* diff)
{
    *sum = n1 + n2;
    *diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main()
{
    int na, nb;
    int wa = 0, sa = 0;

    printf("二つの整数を入力してください。\n");
    printf("整数A:"); scanf("%d", &na);
    printf("整数B:"); scanf("%d", &nb);

    s_d(na, nb, &wa, &sa);

    printf("和は%dで差は%dです。\n", wa, sa);

    return 0;
}
