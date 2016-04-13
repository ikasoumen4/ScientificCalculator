#include<stdio.h>

//多重代入
//代入式は右から評価され代入される。
//すなわち、すべて一番右の値となる
void main(){
	int a = 10;
	int b = 20;


	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n", a = b = 3);
	printf("%d\n",a);
	printf("%d\n",b);
}

