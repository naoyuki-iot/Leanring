#include<stdio.h>
void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}
void sort2(int *n1, int *n2)
{
    if (*n1 > *n2)swap(n1, n2);
}
int main()
{
    int na, nb;
    printf("整数を入力してください。\n");
    printf("整数A:"); scanf("%d", &na);
    printf("整数B:"); scanf("%d", &nb);

    sort2(&na, &nb);

    printf("昇順にソートしました。\n");
    printf("整数Aは%d\n", na);
    printf("整数Bは%d\n", nb);
    return 0;
}