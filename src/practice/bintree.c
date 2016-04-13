#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct BinarySearchTree{
	char *value;
	struct BinarySearchTree *parent;
	struct BinarySearchTree *left;
	struct BinarySearchTree *right;
} BT;



BT *InsertNode(BT *p, const BT *w){
	int cond;

	//比較して子ノードがない場合新しくノードを作成
	if( p == NULL){
		p = calloc(1,sizeof(BT));	//callocは0で領域を埋める
		// malloc(1 * sizeof(BT));	//0埋めしないらしい
		strcpy(p->value,w->value);
		p->left = p->right = NULL;	//初期化
	} else if((cond = strcmp(w->value,p->value)) == 0){//文字列の大小-1,0,1を返し、代入の後 0　と比較　代入先の値が評価に使われる。
		printf("%s 登録済み\n",w->value);
	} else if ( cond < 0){
		p->left = InsertNode(p->left,w);
	}else{
		p->right = InsertNode(p->right,w);
	}
	
}

void ReleaseNode(BT *p){
	if(p != NULL){
		ReleaseNode(p->left);
		ReleaseNode(p->right);
		free(p);
	}
}


void main(){
	BT *bt = calloc(1,sizeof(BT));

	bt->value = "tesdddddddddddddddt";

	printf("%s\n",&bt->value[0]);
	ReleaseNode(bt);


}

