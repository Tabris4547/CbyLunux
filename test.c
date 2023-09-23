
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
	return 0;
}
void printAll(){
	if (g_head==NULL){
		printf("no Node\n");
	}else{
		data * temp=g_head;
		printf("printStart!\n");
		while(temp){
				printf("=========\n");
				printf("num:%d\n",temp->num);
				printf("name:%s\n",temp->name);
				temp=temp->next;
			}
	}
}
data* stack_pop(){

	if(g_head==NULL){
		return NULL;
	}
	data * node=g_tail;

	data *temp=g_head;
	data *before=NULL;
	while(temp->next){
		before=temp;
		temp=temp->next;
	}
	g_tail=before;
	if(before!=NULL){
		before->next=NULL;
	}
	if(g_tail==NULL){
		g_head=NULL;
	}

	return node;	
}
data * pop2(){
	if(g_head==NULL){
		return NULL;
	}

	data * node=g_head;

	if(g_head->next!=NULL){
		g_head=g_head->next;
	}else{

		g_head=NULL;
		g_tail=NULL;
	}
	

	return node;
}
data* search(int num){
	if (g_head==NULL){
		printf("no Node\n");
		return NULL;
	}
	data * temp=g_head;
	while(temp){
		if(temp->num==num){
			printf("I find it!");
			return temp;
		}
		temp=temp->next;
	}
	
}
int main(){
	char name[20]="";
	for(int i=0;i<10;i++){
		sprintf(name,"test%d",i);
		insert(i,name);
	}
	printAll();
	data * tmp=search(5);

	printf("=========\n");
	printf("pop num: %d\n",tmp->num);
	printf("pop name: %s\n",tmp->name);
	/*
	for (int i=0;i<10;i++){	
		data * node1=pop2();
		if (node1){
			printf("=========\n");
			printf("pop num: %d\n",node1->num);
			printf("pop name: %s\n",node1->name);
		
			free(node1);
		}
		printAll();
	}
	*/
	return 1;
}
