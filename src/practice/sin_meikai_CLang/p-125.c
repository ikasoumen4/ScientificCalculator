#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* strdup(const char* s){
	char* p = malloc(strlen(s) + 1);
	return ( p != NULL) ? strcpy(p,s) : NULL;
}


int main(void){
	char st[128];
	char* pt;

	printf("文字列を入力してください：");
	scanf("%s",st);

	if(pt= strdup(st)){
		printf("st = %s\n",st);
		printf("pt = %s\n",st);
		free(pt);
	}

	return 0;
}

