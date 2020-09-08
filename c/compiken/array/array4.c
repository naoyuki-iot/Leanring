#include <stdio.h>
int main()
{
    int i,j;
    int t[4][3]={{93,63,78},{67,72,46},{89,34,53},{32,54,34}};

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++){
            printf("%4d",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
