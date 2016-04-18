#include<stdio.h>
#include<string.h>

int main(void){
	int i;
	char s[10] = "ABCDEFGHI";

	printf("%s\n","ABCDEF");
	printf("%d\n",sizeof("ABCDEF"));

	memset(s,'\0',sizeof(s) - 3);

	for(i = 0; i < sizeof(s); i++)
		printf("s[%d] = [%d]\n",i,s[i]);
	return 0;
}


