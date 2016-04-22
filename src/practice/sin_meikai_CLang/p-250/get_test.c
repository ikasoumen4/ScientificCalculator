#include<ctype.h>
#include<stdio.h>
#include "getchr.h"

//aint getchr(void);
//int ungetchr(int ch);

int getnum(void){
	int c = 0;
	int x = 0;
	int ch;

	while((ch = getchr()) != EOF && isdigit(ch)){
		x = x * 10 + ch - '0';
		c++;
	}
	if(ch != EOF){
		ungetchr(ch);
	}
	if(c) printf("%d\n", x * 2);

	return ch;
}

int getnnum(void){
	int ch;

	while((ch = getchr()) != EOF && !isdigit(ch)){
		putchar(ch);
	}
	if(ch != EOF){
		ungetchr(ch);
	}
	putchar('\n');

	return ch;
}

int main(void){
	
	printf("test\n");
	while(getnum() != EOF){
		if(getnum() == EOF){
			break;
		}
	}
	return 0;
}

