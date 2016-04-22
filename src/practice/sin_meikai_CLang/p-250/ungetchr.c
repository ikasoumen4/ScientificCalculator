#include<stdio.h>
#include "_getchr.h"
#include "getchr.h"

//#define BUFSIZE 256

//extern char buffer[BUFSIZE];
//extern int buf_no = 0;
//extern int front = 0;
//extern int rear = 0;


int ungetchr(int ch){
	if(__buf_no >= __BUFSIZE){
		return EOF;
	}else{
		__buf_no++;
		__buffer[__rear++] = ch;
		if(__rear == __BUFSIZE){
			__rear = 0;
		}
		return ch;
	}
}

