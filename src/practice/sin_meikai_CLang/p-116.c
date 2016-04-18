#include<stdio.h>
#include<string.h>

int main(void){

	
	char str[8] = "";	printf("str = \"%s\"\n",str);
	strcpy(str,"ABCD");	printf("str = \"%s\"\n",str);
	strcpy(str,"");		printf("str = \"%s\"\n",str);
	str[0] = '1';		printf("str = \"%s\"\n",str);
	str[1] = '2';		printf("str = \"%s\"\n",str);

	//strcpyに文字（列）リテラルを渡すと処理系によっては、別物として扱われ1バイトずつ消費されてしまう
	//パフォーマンス的に文字リテラルの終端文字を代入した方がよい
	str[0] = '\0';

	//NULLポインタを参照するが、NULLポインタにNULLが格納されてる保証はないので、使うべきでない
	//strcpy(str,NULL);	printf("str = \"%s\"\n",str);
	printf("%s\n",NULL);
}
