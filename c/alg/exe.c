#include<stdio.h>
int main()
{
//exe1
    int n1,n2,n3,n4,n5;
    int wa;
    double ave;

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    
    wa=n1+n2+n3+n4+n5;
    ave=(double)wa/5;

    printf("%0.1f \n",ave);

//exe2
    int no;
    int a,b,c; //a:100 order b:10 order c:1 order

    scanf("%d",&no);
    a=((no%1000)-(no%100))/100;
    b=((no%100)-(no%10))/10;
    c=no%10;

    printf("%d\n",a+b+c);
    return 0; 
}