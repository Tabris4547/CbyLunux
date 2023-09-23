#include<stdio.h>

int main(){

	int a;
	int *pa;
	int **ppa;

	a=3;
	printf("a=%d\n",a);		
	printf("&a=%u\n",&a);				

	pa=&a;

	ppa=&pa;
	printf("**ppa=%u\n",**ppa);



}
