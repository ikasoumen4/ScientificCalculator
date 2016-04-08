#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//大きさがsizeであるオブジェクトn個分の配列領域を確保する。
//それらの領域は、すべてのピットが0で初期化されます
void *my_calloc(size_t n, size_t size){
	size_t total = n * size;
	void *p = malloc(total);

	if(!p) return NULL;

	return memset(p, 0, total);
}


void main(){
	int *x;
	x = calloc(1,sizeof(int));

	if(x == NULL)
		puts("確保失敗\n");
	else{
		printf("整数を入力してください。\n");
		scanf("%d", x);
		printf("あなたは%dと入力しましたね。", *x);
		free(x);
	}
	return 0;
}

