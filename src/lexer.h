


typedef struct Token{
        char* value;
	unsigned int type;
	struct Token* next;
	struct Token* previous;
}Token;

typedef struct LexState{
	unsigned int state;
	unsigned int pos;
	char* chunk;
	Token* token;
} LexState;




void lex_new(LexState* state, char* chunk);

//void get_token(LexState* state, char* chunk);
