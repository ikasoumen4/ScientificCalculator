#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "lexer.h"



#define TYPE_UNKWON		0x0000
#define TYPE_OP			0x0100	//終端記号 TERM
#define TYPE_BINOP		0x0200
#define TYPE_BINOP_ADD		0x0201
#define TYPE_BINOP_SUB		0x0202
#define TYPE_BINOP_MUL		0x0203
#define TYPE_BINOP_DIV		0x0204
#define TYPE_BINOP_MOD		0x0205
#define TYPE_BINOP_POW		0x0206	//単項演算子だよね
#define TYPE_BLOCK		0x0400
#define TYPE_BLOCK_START	0x0401
#define TYPE_BLOCK_END		0x0402
#define TYPE_NUMBER		0x0800
#define TYPE_ROOT		0xffffffff
//#define TYPE_SPACE

void lex_analyze(LexState* lex);
void lex_show_list(LexState* lex);
int get_token_type(char c);
void token_init(Token* token);




void lex_new(LexState* lex, char* chunk){
	lex->state = TYPE_UNKWON;
	lex->chunk = chunk;
	lex->pos = 0;
	lex->token = malloc(sizeof(Token));
	token_init(lex->token);
	lex->token->type = TYPE_ROOT;


	lex_analyze(lex);
	lex_show_list(lex);
}


void token_init(Token* token){
	token->previous = NULL;
	token->next = NULL;
	token->type = TYPE_UNKWON;
	token->value = NULL;
}



//線形リストが構築できない！！！！！！
void token_add(LexState* lex, Token* token){
	
	Token* t = lex->token;
	Token* last = NULL;

	while(last == NULL){

		if(t->next != NULL){
			t = t->next;
		}else{
			last = t;
		}
	}

	last->next = token;
	token->previous = last;

}


void lex_show_list(LexState* lex){
	

	printf("字句解析完了\n");

	Token* token = lex->token;

	while(token){
		printf("%s : %lu \n",&token->value, token->type);
		token = token->next;
	}
}		


int count = 0;

void lex_analyze(LexState* lex){
	printf("字句解析開始\n");


	while(lex->chunk[lex->pos] != '\0'){

		int t = get_token_type(lex->chunk[lex->pos]);
		
		if(t != TYPE_UNKWON){

			Token* token = malloc(sizeof(Token));
			token_init(token);

			token->type = t;

			//警告出るけど正しいのか？？？
			token->value = (char*) lex->chunk[lex->pos];
			//printf("%c\n",token->value);

			token_add(lex,token);

		}else{
			printf("解析完了\n");
			return;
		}

		lex->pos++;
	}



}



int get_token_type(char c){
	
	switch(c){
		case '+': return TYPE_BINOP_ADD;
		case '-': return TYPE_BINOP_SUB;
		case '*': return TYPE_BINOP_MUL;
		case '/': return TYPE_BINOP_DIV;
		case '%': return TYPE_BINOP_MOD;
		case '^': return TYPE_BINOP_POW;
		case '(': return TYPE_BLOCK_START;
		case ')': return TYPE_BLOCK_END;
	}

	switch(c){
		case '0': return TYPE_NUMBER;
		case '1': return TYPE_NUMBER;
		case '2': return TYPE_NUMBER;
		case '3': return TYPE_NUMBER;
		case '4': return TYPE_NUMBER;
		case '5': return TYPE_NUMBER;
		case '6': return TYPE_NUMBER;
		case '7': return TYPE_NUMBER;
		case '8': return TYPE_NUMBER;
		case '9': return TYPE_NUMBER;
	}

	return TYPE_UNKWON;
}



