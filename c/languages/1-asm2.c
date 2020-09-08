#include <stdio.h>
int main(){

int i,sq,sum;
sum=0;

for(i =1;i<51;i++){
    sq=i*i;
    sum=sum+sq;
    }

printf("%d\n",sum);//42925
return 0;
}