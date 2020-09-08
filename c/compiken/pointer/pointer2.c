#include<stdio.h>
void grow(int *height)
{
    if (*height < 180)*height = 180;
}

int main()
{
    int satou = 178;
    int masaki = 179;
    
    grow(&masaki);
    printf("佐藤の身長:%d\n", satou);
    printf("真崎の身長:%d\n", masaki);
    
    return 0;
}
