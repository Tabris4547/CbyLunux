#include<stdio.h>

int main(){
	FILE *fd;
	char ch;

	fd=fopen("a.txt","a");
	printf("!!!\n");
	if(fd==NULL){
		printf("file open error\n");
	}else{
		printf("sucess\n");
	}
	fprintf(fd,"hello\n");
	fclose(fd);
	fd=fopen("a.txt","r");	
	if(fd==NULL){
		printf("file open error\n");
	}else{
		printf("sucees\n");
	}
	while (1){
		ch=fgetc(fd);
		if(ch==EOF){
			break;
		}
		putchar(ch);
	}
}
