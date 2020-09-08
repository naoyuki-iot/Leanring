#include <stdio.h>

int main(){
int i,sum;
__asm{
    mov sum, 0  //sum=0
    mov i , 1   //i =1

label:
    cmp i , 51  //i と 51 の比較
    jae exit    //i >=51 なら exit に飛ぶ
    mov eax , i //eax レジスタに i を入れる
    mul i       //eax の値に i を掛ける
    add sum,eax //sum= sum+i*i
    inc i       //i =i+1
    jmp label   //label に飛ぶ

exit:
    }
printf("%d\n",sum);
return(0);
}
