#include<stdio.h>
#include<stdlib.h>
#define MAX 200
int g_h_total=0;

typedef struct human{
	int num;
	char name[20];
	human * next;
}human;

void add_h(human *  h_num){

	h_num[g_h_total].num=g_h_total+1;
	sprintf(h_num[g_h_total++].name,"test%d",g_h_total);
	
}

void print_all(human * h_num){
	int i=0;
	while(h_num[i].num){
		printf("%d :%d %s\n",i,h_num[i].num,h_num[i].name);
		i++;
		if(i>=MAX){

			break;
		}
	}
}

int main(){

	human h_num[MAX];

	for (int i=0;i<MAX;i++){
		add_h(&h_num);
	}
	print_all(h_num);
	

	return 1;
}
