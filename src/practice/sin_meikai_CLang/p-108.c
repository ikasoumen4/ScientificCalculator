#include<stdio.h>

void main(){
	int i;
	char a[][5] = {"LISP","C","Ada"};	//全ての要素は領域に対して連続して配置される
	char *p[] = {"PAUL","X","MAC"};		//文字列の配置の順序や連続性は保証されない

	for(i = 0; i < 3; i++)
		printf("%p:a[%d] = %s\n",a[i],i,a[i]);

	for(i = 0; i <3;i++)
		printf("%p:p[%d] = %s : \n",p[i],i,p[i]);

}

