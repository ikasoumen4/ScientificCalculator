#include<stdio.h>
#include<stddef.h>

struct test{
	char c1;
	int nx;
	char c2;
};

int main(int argc,char* argv[]){

	printf("%d\n",sizeof(char));
	printf("offset of c1 = %u\n",(unsigned)offsetof(struct test, c1));
	printf("offset of nx = %u\n",(unsigned)offsetof(struct test, nx));
	printf("offset of c2 = %u\n",(unsigned)offsetof(struct test, c2));

	return 0;
}


