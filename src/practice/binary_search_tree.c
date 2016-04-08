#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN	128	/*名前の配列長*/

typedef enum {
	Term, Insert, Search, Print
} Menu;

typedef struct __bnode{
	char name[MAX_LEN];
	struct __bnode *parent;
	struct __bnode *left;
	struct __bnode *right;
} BinNode;

//ノードの確保
BinNode *AllocNode(void){
	return calloc(1, sizeof(BinNode));
}

BinNode *InsertNode(BinNode *p, BinNode *w){
	int cond;

	if (p == NULL){
		p = AllocNode();
		strcpy(p->name,w->name);
		p->left = p->right = NULL;	//TODO:この構文なんだよ
	} else if ((cond = strcmp(w->name,p->name)) == 0){
		printf("【エラー】%sはすでに登録されています。\n", w->name);
	} else if ( cond < 0){
		p->left = InsertNode(p->left,w);
		w->parent = p;
	} else {
		p->right = InsertNode(p->right,w);
		w->parent = p;
	}

	return p;

}


void SearchNode(BinNode *p, const BinNode *w){
	int cond;

	if (p== NULL){
		printf("【エラー】%sは登録されていません。\n", w->name);
	}else if(( cond = strcmp(w->name,p->name)) == 0){
		printf("【エラー】%sは登録されています。\n", w->name);
	} else if ( cond < 0){
		SearchNode(p->left,w);
	} else {
		SearchNode(p->right,w);
	}
}

void PrintTree(const BinNode *p){
	if ( p != NULL ){
		PrintTree(p->left);
		printf("%s\n",p->name);
		PrintTree(p->right);
	}
}

void FreeTree(BinNode *p){
	if ( p != NULL ){
		FreeTree(p->left);
		FreeTree(p->right);
		free(p);
	}
}

BinNode Read(const char *message){
	BinNode temp;

	printf("%sする名前を入力してください。：",message);
	scanf("%s",temp.name);
	return temp;
}

Menu SelectMenu(void){
	int ch;

	do{
		printf("\n(1)挿入(2)探索(3)表示(0)終了：");
		scanf("%d",&ch);
	} while (ch < Term || ch > Print);

	return (Menu)ch;
}


int main(){
	Menu menu;
	BinNode *root;

	root = NULL;
	do {
		BinNode x;
		switch ( menu = SelectMenu()){
			case Insert : x = Read("挿入");
				root = InsertNode(root,&x);
				break;
			case Search : x = Read("探索");
				SearchNode(root,&x);
				break;
			case Print : puts("--- 一覧表 ---");
				PrintTree(root);
				break;
		}
	} while ( menu != Term);

	FreeTree(root);

	return 0;
}


