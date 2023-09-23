#include<stdio.h>
#include<string.h>

char *strcpy(char *dest,const  char *src);
size_t  strlen(const char *src);
int strcmp(const char*str,const char *str2);

int main(){


	char str[20]="abc\n";

	char str_c[20]="abcd\n";
	
		
	printf("%d\n",strcmp(str,str_c));
	printf("str_c :%s",str_c);

	strcpy(str_c,str);
	printf("str_c :%s",str_c);
}

int strcmp(const char*str,const char *str2){
		
	int slen=strlen(str);
	
	int s2len=strlen(str2);
	int len=0;

	if(slen>=s2len){
		len=slen;
	}else{
		len=s2len;
	}
	for (int i=0;i<len;i++){

		if(*(str+i)==0){
			return 0-*(str2+i);	
		}
		else if (*(str2+i)==0){
			return *(str+i)-0;
		}
		int val=*(str+i)-*(str2+i);
		if (val!=0){
			return val;	
		}
	}
	

}
size_t strlen(const char *src){
	size_t length=0;

	if(src!=NULL){
		for (int i=0;;i++){
			if(*(src+i)==0){
				break;
			}
			else{
				length++;
			}
		}
	}
	else
	{
		return -1;
	}

	return length;

}

char *strcpy(char *dest,const char *src){
	/*
	while(*src){

		*dest++=*src++;

	}
	*/

	for (int i=0;i<strlen(src);i++){
		dest[i]=src[i];
	}
	return dest;
}
