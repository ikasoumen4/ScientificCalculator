
int slen(char *str){
	char *start;
	//size_t

	for(start=str; *str; ++str);
	
	return str - start;

}
