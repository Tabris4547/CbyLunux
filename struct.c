#include<stdio.h>
#include<string.h>
typedef struct student{

	int s_id;
	char name[20];
	struct student* next;
}std;

void std_func(std *st);
int main(){

	std  st;

	std_func(&st);
	
	printf("s_id: %d\n",st.s_id);
	printf("name: %s\n",st.name);	

	return 1;
}

void std_func(std*  st){
	st->s_id=10;

	strcpy(st->name,"kane");
	
}
