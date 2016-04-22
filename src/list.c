#include<stdio.h>
#include<stdlib.h>


typedef struct LIST{
	struct LIST * next;
	int value;
} LIST;

LIST list;


void Add(int value);
void Del(int value);
void Display();
void Release();

int main(void){
	
	list.next = NULL;
	char answer = '5';
	int figure;

	puts("何をしますか? 0 end 1 add 2 del 3 display \n");

	while(answer != '0'){
		scanf("%c",&answer);

		fflush(stdin);

		switch(answer){
			case '1':
				puts("追加する値は?\n");
				scanf("%d",&figure);
				Add(figure);
				break;
			case '2':
				puts("追加する値は?\n");
				scanf("%d",&figure);
				Del(figure);
				break;
			case '3':
				Display();
				break;
			default:
				puts("正しい値を入力してください\n");
				break;
		}

		fflush(stdin);
		puts("何をしますか？0 end 1 add 2 del 3 display\n");
	}

	Release();
	return 0;
}

void Add(int temp){
	LIST *p;
	LIST *next;
	LIST *prev;

	p = (LIST*)malloc(sizeof(LIST));
	p->value = temp;
	p->next=NULL;

	prev=&list;

	for(next = list.next; next != NULL; next = next->next){
		prev = next;
	}

	prev->next = p;

	puts("追加しました。");
}



void Del(int temp){
	LIST* prev;
	LIST* p;

	prev=&list;

	for(p = list.next; p != NULL; p = p->next){
		if(p->value == temp){
			if(p->next != NULL){
				prev->next = p->next;

				free(p);
				return;
			}

			prev->next = NULL;

			free(p);

			puts("削除しました。");
			return;
		}

		prev = p;
	}

	puts("該当の値は見つかりませんでした。");

}

void Display(){

	LIST* p;

	if(list.next == NULL){
		puts("何もありません。\n");
		return;
	}

	for(p = list.next; p != NULL; p = p->next){
		printf("%d\n",p->value);
	}
	puts("");
}

void Release(){
	LIST* next;
	LIST* del;

	next = list.next;

	while(next){
		del = next;
		next = next->next;

		free(del);
	}
}



