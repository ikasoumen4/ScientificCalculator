#include<stdio.h>
#include<assert.h>
#include "utility/mystring.h"

#define DEBUG //コメントアウトしたりして切り替えてください。


#if defined DEBUG
	#define debug() printf("%s:%d\n",__FILE__,__LINE__)
#else
	#define debug() //何も実行しないというか空文字に置きかえられる
#endif


//My Utility
//char *strcpy(char *s1, char *s2);

void GetHelp();

int main(int argc, char *argv[]){
	

	if(argc == 1){
		GetHelp();
	}

	int i;

	printf("%d\n",slen(argv[1]));
	debug();
	char *str = "                          ";
	debug();

	//size_t l;	//TODO:size_t ってなに


	//自作の　strcpy(char *str1, const char *str2)　第２引数は破壊されないことを保証するためconst char となっている
	for(i = 1; i < argc; i++){
		debug();
		

		
		debug();

		//int count = 0;
		//for(count = 0; arg[count] != '\0'; count++){
			
			
			//printf("%01x %c\n", &arg[count], arg[count]);	//TODO:08　の意味が分からない　x X は16進数
		//}

	}
	debug();
	printf("%s\n",str);
	debug();

	//printf("%s\n", *argv[0]);	//NG ポインタを渡したらそれはchar型にはならないため


}


void GetHelp(){
	printf("please input statement\n");

}


