#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct BinarySearchTree{
	char value[128];
	struct BinarySearchTree *parent;
	struct BinarySearchTree *left;
	struct BinarySearchTree *right;
} BT;


BT* InsertTree(BT *current, BT *new){

	int cond;

	if(current == NULL){
		current = calloc(1,sizeof(BT));
		strcpy(current->value, new->value);
		current->left = current->right = NULL;
	}else if(cond = strcmp(current->value, new->value) == 0){
		printf("挿入済みです。\n");
	}else if(cond < 0){
		current->left = InsertTree(current->left,new);
	}else if(cond < 0){
		current->right = InsertTree(current->right,new);
	}
	return current;
}


void main(){
	BT *root;
	root = NULL;

	BT node;
	node.value = "child";

	InsertTree(root, &node);



}
