#include<stdio.h>
#include<string.h>


//先頭アドレスが渡され、ポインタの大きさ（char*）として評価されてしまっている。
void clear_string(char* str){
	memset(str,'\0',sizeof(str));
}

void clear_string2(char str[]){
	memset(str,'\0',sizeof(str));
}

void clear_string3(char* str, int length){
	memset(str,'\0',length);
}

int main(void){
	int i;
	char s[] = "ABCDEFGHI";

	//clear_string(s);
	//clear_string2(s);
	clear_string3(s,9);
	//memset(s,'\0',sizeof(s));

	for(i = 0; i < sizeof(s); i++)
		printf("s[%d] = %d\n", i ,s[i]);
	
	return 0;
}


