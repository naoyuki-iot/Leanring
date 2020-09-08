#include <stdio.h>
int main(){
    int i,f;
    f=1;
    for(i=2;i<10;i++){
        f=f*i;
    }
    printf("%d\n",f);//362880

    return 0;
}