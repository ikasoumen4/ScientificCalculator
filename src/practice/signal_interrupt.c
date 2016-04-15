#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>

static int g_hoge = 0;

void sig_handler(int signo){
	
	if(signo == SIGUSR1){
		printf("received SIGUSR1\n");
	}else if(signo == SIGKILL){
		printf("received SIGKILL\n");
	}else if(signo == SIGSTOP){
		printf("received SIGSTOP\n");
	}else if(signo == SIGTERM){
		printf("received SIGTERM\n");
	}else if(signo == SIGSEGV){
		printf("received SIGSEGV\n");
	}
	g_hoge = 1;
}

int main(void){
	if(signal(SIGUSR1,sig_handler) == SIG_ERR){
		printf("\ncant catch SIGUSR1\n");
	}


	if(signal(SIGTERM,sig_handler) == SIG_ERR){
		printf("\ncant catch SIGTERM\n");
	}


	if(signal(SIGKILL,sig_handler) == SIG_ERR){
		printf("\ncant catch SIGKILL\n");
	}


	if(signal(SIGSTOP,sig_handler) == SIG_ERR){
		printf("\ncant catch SIGSTOP\n");
	}

	if(signal(SIGSEGV,sig_handler) == SIG_ERR){
		printf("\ncant catch SIGSEGV\n");
	}

	printf("%d\n",SIGSEGV);

	while(1){
		if(g_hoge == 1) break;
		sleep(1);
	}

	printf("the end\n");
	return 0;
}



