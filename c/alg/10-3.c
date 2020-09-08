#include<stdio.h>
void quicksort(int a[],int n)//11回
{
    int i,bn=0,cn=0,temp;
    int b[100],c[100];
    double border=0.0;

    if(n==0||n==1)
    return;

    if(n==2)
    {
        if(a[1]>a[0])
        {
            temp=a[0];
            a[0]=a[1];
            a[1]=temp;
        }
    return;
    }

    for(i=0;i<n;i++)
        border+=a[i];
    border/=n;

    printf("border=%f\n",border);

    for(i=0;i<n;i++)
        if(a[i]>border)
            b[bn++]=a[i];

        else
            c[cn++]=a[i];

    if(bn!=0 && cn!=0)
    {
        quicksort(b,bn);
        quicksort(c,cn);
        

        for(i=0;i<bn;i++)
            a[i]=b[i];

        for(i=bn;i<bn+cn;i++)
            a[i]=c[i-bn];
    }
}

int main()
{
    int data[]={4,7,3,9,2,3,7,4,6,3};
    int i;
    quicksort(data,10);
    for(i=0;i<10;i++)
        printf("%d ",data[i]);
    printf("\n");

    return 0;
}