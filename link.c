#include<stdio.h>
#include<stdlib.h>

typedef struct data{

	int num;
	char name[20];
 	struct data *next;
}data;

data * g_head=NULL;
data * g_tail=NULL;

int insert(int num,char* name){
	data *node=(data*)malloc(sizeof(data));

	node->num=num;
	if(name!=NULL){
		strcpy(node->name,name);
	}
	node->next=NULL;

	if(g_head==NULL){
		g_head=node;
		g_tail=node;
		return 1;
	}else{
		data * temp=g_head;
		
		while(temp->next){
			temp=temp->next;
		}

		temp->next=node;
		g_tail=node;
		return 1;
	}
	
	

}

int main(){

	return 1;
}
