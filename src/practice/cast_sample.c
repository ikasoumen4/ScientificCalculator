#include<stdio.h>

#define d() printf("%s : %d\n",__FILE__,__LINE__);

int main(){

	char data = 0xff;
	data = 255;
	printf("%d\n",data);
	
	if(data == 0xff){
		d();
	}else{
		d();
	}
}

