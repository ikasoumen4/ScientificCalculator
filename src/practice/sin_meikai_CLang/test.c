#include<stdio.h>


void test(char s[]){
	
	printf("%d\n",sizeof(s));
}

int main(void){
	
	char s[] = "test";

	printf("%d\n",sizeof(s));
	test(s);

}
