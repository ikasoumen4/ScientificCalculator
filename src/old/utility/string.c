
unsigned int strlen(const char *str){
	unsigned int length= 0;
	//size_t

	while(*str++ != '\0'){
		length++;
	}
	
	return length;

}



char *strcat(char *left, const char *right){
	char *top;	//戻り値用の先頭アドレス

	top = left;

	while(*left++ != '\0')
	*left--;

	//buffer overflow
	while((*left++ = *right++) != '\0');

	return top;
}

