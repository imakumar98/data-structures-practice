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


bool Search(Node *root, int data){
	if(root==NULL) return false;
	if(root->data==data) return true;

	else if(data<=root->data) return Search(root->left, data);

	else return Search(root->right, data);

}




int main(){

	Node *root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);

	
	if(Search(root, 10)==true) cout<<"Found\n";

	else cout<<"Not found\n";
	
}