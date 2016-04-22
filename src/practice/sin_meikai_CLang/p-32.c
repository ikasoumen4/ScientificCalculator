#include<stdio.h>
#include<string.h>



char* DecToBin(int number, int length, char* out){

	length = length * 8;
	int i = 0;
	int IsMinus = number < 0 ? 1 : 0;

	memset(out,'0',length);
	out[length] = '\0';
	
	//printf("%d\n",number);
	if(IsMinus) number = ~number;//1の補数　 -1 なら 0 になる

	//printf("%d\n",number);

	while(number != 0){
		
		if(number % 2) out[length - 1 - i] = '1';
		number = number / 2;
		i++;
		
	}
	
	if(IsMinus){

		for(i = 0; i < length; i++){
			out[i] = (out[i] == '0') ? '1' : '0';
		}

	}
	


	return out;
}


int main(void){

	//printf("%d\n",sizeof(int));

	char bit[sizeof(int) * 8];

	int i;


	//for(i = 0; i < 256; i++){a
	//	printf("%d : %s\n",-i, DecToBin(-i,sizeof(int), bit));
	//}
	//
	printf("%u : %s\n",-100, DecToBin(100,sizeof(int),bit));

	return 0;
}

