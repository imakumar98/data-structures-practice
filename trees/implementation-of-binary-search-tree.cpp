#include <iostream>

using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};


Node *createNode(int data){
	Node *newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}


Node *insert(Node *root, int data){

	if(root==NULL){
		root = createNode(data);
		
	}else if(data<=root->data){
		root->left = insert(root->left, data);
	}else{
		root->right = insert(root->right, data);
	}
	return root;

};




int main(){

	Node *root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);
	
}