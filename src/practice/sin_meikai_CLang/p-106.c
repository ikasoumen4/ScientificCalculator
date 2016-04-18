#include<stdio.h>

void main(){
	char arr[] = "ABC";
	char *ptr = "XYZ";	//ポインタがスタックに置かれ、それとは別に文字リテラルがどこかの静的領域に置かれる。sizeof(char *) + sizeof("XYZ")

	printf("arr = %s\n",arr);
	printf("ptr = %s\n",ptr);
	
	char (*pz)[4];	//要素数が4である配列へのポインタ　特定の長さを持つ文字列へのポインタは、異なる長さの文字列へのポインタとは相互性がなく、先頭アドレスで持たせる方が融通がきく。

	pz = &arr;	//配列全体へのポインタ
	pz = ptr;	//型が不一致　配列数が合わない　これは先頭アドレス

	printf("pz = %s\n",pz);
}

