#include<stdio.h>



//ポインタの返す型は一体何のか？？？
//intではないのか？？？
void main(){
	char* s = "test dayo";

	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(s));

	printf("%s\n",s);

}
