#include <iostream>


using namespace std;

struct Node{
	Node *left;
	int data;
	Node *right;
};

Node *createNode(int value){
	Node *tempNode = new Node;
	tempNode->data = value;
	tempNode->left = NULL;
	tempNode->right = NULL;
	return tempNode;
}

Node *Insert(int data, Node *root){

	if(root==NULL){
		root = createNode(data);
	}else if(data<=root->data){
		root->left = Insert(data, root->left);
	}else{
		root->right = Insert(data, root->right);
	}
	return root;
}

int main(){

	Node *root = NULL;

	root = Insert(15, root);

	root = Insert(10, root);

	root = Insert(20, root);

	root = Insert(8, root);

	root = Insert(12, root);

	root = Insert(17, root);

	root = Insert(25, root); 




}
