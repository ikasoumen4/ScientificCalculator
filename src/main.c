#include<stdio.h>

//#define DEBUG //コメントアウトしたりして切り替えてください。


#if defined DEBUG
	#define debug() printf("%s:%d\n",__FILE__,__LINE__)
#else
	#define debug() //何も実行しないというか空文字に置きかえられる
#endif

void GetHelp();

int main(int argc, char *argv[]){
	

	if(argc == 1){
		GetHelp();
	}
	
	int i;

	char *arg;
	for(i = 0; i < argc; i++){
		arg = argv[i];
		
		int count;
		for(count = 0; arg[count] != '\0'; count++){
			printf("%08X %c\n", &arg[count], arg[count]);
		}


	}








	//printf("%s\n", *argv[0]);	//NG ポインタを渡したらそれはchar型にはならないため


}


void GetHelp(){
	printf("please input statement\n");

}
