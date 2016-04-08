#include<stdio.h>



int *num = NULL;
int test(int *value){

}



int main(){
	
	char *str1 = "test1aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n";	//右辺の文字列は定数領域に置かれる。システムとコンパイラに依存し、通常は、書き込み禁止領域となる。str1はその文字列を指すアドレスを表す。
	char str2[] = "test2\n";	//s[3] = {'a','b','\0'} のような糖衣構文　スタック領域上に乗るため、書き換え可能

	printf(str1);
	printf(str2);

	printf("%d\n",sizeof(str1));	//文字列を指すポインタ変数 定数文字列領域に置かれる　定数領域はシステムとコンパイラに依存し、通常は、書き込み禁止領域となる。
	printf("%d\n",sizeof(str2));	//配列の数を返す？？
	


}



