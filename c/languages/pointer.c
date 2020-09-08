#include<stdio.h>
int main(){
	int a[] = {100,200,300};
	int* p = a;//aのアドレスをポインタpに代入

	printf("%p\n", a);  //100
//printf("%p\n", a); //0x...
	printf("%p\n", p);  //0x...
	printf("%d\n", *(p+1)); //100
	//printf("%d\n", *(&a));

	return 0;
}
