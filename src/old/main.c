#include<stdio.h>
#include<assert.h>
#include "utility/string.h"

//#define DEBUG //コメントアウトしたりして切り替えてください。


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



	//char str[10];
	
	char s1[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char *s2 = argv[0];
	strcat(s1,s2);
	printf("%s\n",s1);
	


	int i;
	//size_t l;	//TODO:size_t ってなに

	for(i = 1; i < argc; i++){
		debug();
		printf("%s : %d\n",argv[i],strlen(argv[i]));
		debug();	
			//printf("%01x %c\n", &str[count], str[count]);	//TODO:08　の意味が分からない　x X は16進数
		//}

	}

}


void GetHelp(){
	printf("please input statement\n");
}


