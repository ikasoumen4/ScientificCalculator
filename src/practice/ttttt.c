#include<stdio.h>

void strcpy(char* dest, char* source){
	while(*dest++ = *source++);
}


void main(){
	char* str1 = "test1";
	char str2[] = "test2";

	printf("%s\n",(str2 + 1)); //ループエンドは\0 終端文字で判別　終端文字がなければ・・・？

	//ポインタは結局のところ、ただのint型

}

