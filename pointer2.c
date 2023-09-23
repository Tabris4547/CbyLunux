#include<stdio.h>



void swap(int *a,int *b){
	int tmp=*b;

	*b=*a;
	*a=tmp;

}
void test2(){
	printf("fun test2\n");
}
void test(){
	printf("fun test\n");
}

int main(){
	void (*fp)();

	fp=test;
	fp();

	fp=test2;
	fp();


	printf("test: %u,&test :%u\n",test,&test);
	
	
	return 1;
}
