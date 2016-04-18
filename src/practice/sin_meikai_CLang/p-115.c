#include<ctype.h>
#include<stdio.h>
#include<string.h>

#define Q_NO 3

FILE *fp;

int initialize(void){
	fp = fopen("DATA","r");
	return (fp == NULL) ? 0 : 1;
}

void ending(void){
	fclose(fp);
}

int main(void){
	if(initialize()){
		int q,ch;
		char qus[20] = "";
		char ans[20] = "";

		for(q = 0; q < Q_NO; q++){
			int i;

			strcpy(ans,"");	//先頭アドレスに対して終端文字が置かれるが、残ったバッファはそのまま残る
			strcpy(qus,"");


			//fgetc ファイルから1文字読み込む
			//getc（マクロ実装可能なfgetc??）と類似している
			if((ch  = fgetc(fp)) == EOF) goto ending;

			//isspace
			//http://www.c-tipsref.com/reference/ctype/isspace.html
			//標準空白類文字かどうかチェックするが、ロケール次第では想定した結果が得られないかもしれない
			for(i = 0; !(isspace(ch)); i++){
				qus[i] = ch;
				//qus[i+1] = '\0';
				ch = fgetc(fp);
			}

			ch = fgetc(fp);

			for(i = 0; !(isspace(ch)); i++){
				ans[i] = ch;
				//ans[i+1] = '\0';
				ch = fgetc(fp);
			}

			printf("問題=%s 回答=%s\n",qus,ans);
		}
	ending:
		ending();
	}
	return 0;
}


