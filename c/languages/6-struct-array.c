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
    int i;
    struct gstudent student[2]={"Sanaka",175,60.5,50000,"Sato",178,61.2,30000};

    for(i=0;i<2;i++)
    {
        printf("name  : %s\n",student[i].name);
        printf("height: %d\n",student[i].height);
        printf("weight: %f\n",student[i].weight);
        printf("schols: %ld\n",student[i].schols);
        printf("\n");
    }

    return 0;
}