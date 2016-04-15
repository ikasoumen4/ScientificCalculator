#include<stdio.h>

//
//#define pause() scanf("%s",tmp)
#define pause() system("read -p 'next section >>>>>>>>>>>>>>>>>>>>>>>'")

int main(void){

	char tmp[4];

	printf("文字列について学習します。\n");
	printf("文字列はバッファを定義します。\n");
	printf("buf[4]\n");
	printf("ここではバッファが4なので、先頭アドレスから４文字以上上書きするとバッファオーバーランが発生し危険です。\n");
	printf("バッファオーバーフローとも言います\n");
	printf("例えば、このようなコードが危険です。\n");
	printf("scanf(s,buf)\n");
	printf("これを回避するには、以下のような方法で制限をかけることができます。\n");
	printf("scanf(4s)\n");
	pause();

	printf("文字列定数について\n");
	printf("sizeof(char) = %u\n",(unsigned)sizeof(char));
	printf("sizeof(int)  = %u\n",(unsigned)sizeof(int));
	printf("sizeof('A')  = %u\n",(unsigned)sizeof('A'));
	printf("\n");
	printf("初期のC言語ではintが中心だったので、char型はintに昇格されていた。（既定の実引数拡張）\n");
	printf("ただし、C++は型が厳密なためcharとして扱われています!!!!!!!!!\n");

	pause();

	printf("%%s\n");
	printf("配列宣言時の領域への配置について\n");
	printf("char test[][5] = {\"LISP\",\"C\",\"Ada\"}\n");
	printf("上記の要素は,LISP-1 LISP-2 LISP-3 C-1 C-2 ...　のように領域に配置される\n");

	pause();
	
	printf("ポインタによる文字列の配列\n");
	printf("char *p[] = { \"PAUL\", \"X\",\"MAC\" };\n");
	printf("各要素が置かれる領域は、連続性や順序は保証されない\n");

	printf("空白などで隣り合う文字リテラルはコンパイル時に連結されます\n");
	printf("test1" "test2" "test3" "\n");

	//const char s[] = "test";
	//printf("test1" s); //文字リテラルではないので不可
	//ダブルクォーテーションはシングルクォーテーションの集合ととらえる？？

}

