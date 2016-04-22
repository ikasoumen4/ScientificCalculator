#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "lexer.h"


static void show_help(void);

int main(int argc, char* argv[]){
	
	if(argc < 2){
		show_help();
		return 0;
	}

	int i = 0;
	int buf = 0;

	for(i = 1; i < argc; i++){
		
		int s_count;

		for(s_count = 0; argv[i][s_count] != '\0'; s_count++){
			buf++;
		}

	}

	
	char* chunk = malloc(buf + 1);

	if(chunk == NULL){
		printf("メモリの確保に失敗しました。\n");
	}

	memset(chunk,'\0',buf + 1);
	int chunk_count = 0;
	
	for(i = 1; i < argc; i++){
		int s_count;
		char s;

		strcat(chunk,argv[i]);

	}


	LexState state;
	LexState* lex = &state;
	lex_new(lex, chunk);
	//get_token(lex, chunk);

	free(chunk);

}


static void show_help(void){

	printf("COMMAND [EXPRESION]...\n");
	printf("式でワイルドカード（掛け算）を使う場合シングルクォーテーションなどで囲ってください\n");
}
