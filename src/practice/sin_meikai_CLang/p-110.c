#include<stdio.h>

void scp1(char* f, char* t){
	while(*f != '\0'){
		*t = *f;
		f++; t++;
	}
	*t = '\0';
}

void scp2(char* f, char* t){
	do{
		*t++ = *f++;
	} while (*f);

	//*t = '\0';
}


int main(void){
	char astr[7] = "ABC";
	char bstr[7] = "XXXXXX";
	char cstr[7] = "YYYYYY";

	scp1(astr,bstr);
	scp2(astr,cstr);

	printf("a = %s\n",astr);
	printf("b = %s\n",bstr);
	printf("c = %s\n",cstr);

}

