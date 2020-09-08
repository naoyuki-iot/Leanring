#include <stdio.h>
#include <math.h>
#define sqr(n) ((n)*(n))
typedef struct
{
    double x;
    double y;
}
Point;

double distance(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main()
{
    Point crnt, dest;

    printf("現在地のX座標："); scanf("%lf", &crnt.x);
    printf("現在地のY座標："); scanf("%lf", &crnt.y);
    printf("目的地のX座標："); scanf("%lf", &dest.x);
    printf("目的地のY座標："); scanf("%lf", &dest.y);
    printf("目的地までの距離は%.2fです。\n", distance(crnt, dest));

    return 0;
}
