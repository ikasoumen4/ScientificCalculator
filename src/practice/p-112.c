#include<stdio.h>


char* scpy1(char* dest, const char* source){
	int i = 0;
	while((dest[i] = source[i]) != '\0'){
		i++;
	}

	//dest++ = dest[i++]

	return dest;
}

char* scpy2(char* dest, const char* source){
	while((*dest = *source) != '\0'){
		dest++;
		source++;
	}
	return dest;
}

char* scpy3(char* dest, const char* source){
	while((*dest++ = *source++) != '\0');
	return dest;
}

char* scpy4(char* dest,const char* source){
	while(*dest++ = *source++);
	return dest;
}

char* err_scpy1(char* dest, const char* source){

	//ループ処理が開始した瞬間にreturnで抜ける
	while(*dest++ = *source++)
	return dest;
}

char* err_scpy2(char* dest, const char* source){
	//sourceがインクリメントされず、
	//終端文字が一生返ってこないため
	//バッファオーバーフローしながら、
	//signal 11(不正なメモリ参照)で終了する
	//静的領域空間に接触かなんかかな？
	while(*dest++ = *source);
	return dest;
}



void main(){

	char s1[] = "test1";
	char s2[] = "test2";
	
	printf("%s\n",s1);
	//scpy1(s1,s2);
	//scpy2(s1,s2);
	//scpy3(s1,s2);
	//scpy4(s1,s2);
	//err_scpy1(s1,s2);
	err_scpy2(s1,s2);
	printf("%s\n",s1);

}
