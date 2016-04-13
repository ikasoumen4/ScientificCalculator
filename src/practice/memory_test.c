#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){

	int i = 1;
	int MAX = 1000000;
	int *p = calloc(1,sizeof(int));

	//p = calloc(1,sizeof(int));
	for(i = 1; i < MAX; i++){
		free(p);
		p= calloc(i * 20 ,sizeof(int));
	}	

}
