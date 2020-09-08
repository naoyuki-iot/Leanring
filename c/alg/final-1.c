#include <stdio.h>

#define ROW 2
#define COLUMN 2

int main()
{
    int x,y;
    int i,j;
    int a=2,b=1,c=4;//ax+by=c
    int d=4,e=-3,f=-2;//dx+ey=f
 
    int det=a*e-b*d;//行列式
    
    x=(e*c+(-b)*f)/det;
    y=((-d)*c+a*f)/det;
    printf("x=%d, y=%d\n",x,y);

    return 0;
}