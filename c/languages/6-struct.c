#include<stdio.h>
struct gstudent
{
    char name[20];
    int   height;
    float weight;
    long schols;
};

int main()
{
    struct gstudent sanaka={"Sanaka",175,60.5};

    printf("name  : %s\n",sanaka.name);
    printf("height: %d\n",sanaka.height);
    printf("weight: %f\n",sanaka.weight);
    printf("schols: %ld\n",sanaka.schols);

    return 0;
}