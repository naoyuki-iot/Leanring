#include<stdio.h>
int main()
{
    long int n;
    int cnt=0;
    scanf("%ld",&n);

    while(n>0){
        if(n>=25){
            n-=25*(n/25);
            cnt+=n;
            printf("%d\n",cnt);
        }
        else if(n>=10){
            n-=10*(n/10);
            cnt+=n;
        }
        else if(n>=5){
            n-=5*(n/5);
            cnt+=n;
        }
        else if(n>=1){
            n-=1*(n/1);
            cnt+=n;
        }
        else{
            continue;
        }
    }
    printf("%d\n",cnt);
    return 0;
}