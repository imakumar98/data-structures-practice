#include <iostream>
#include <queue>


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

bool isSubtreeLesser(Node *root, int value){
	if(root==NULL) return true;
	if(root->data<value && isSubtreeLesser(root->left, value)
		&& isSubtreeLesser(root->right, value)){
		return true;
	}else{
		return false;
	}

}

bool isSubtreeGreater(Node *root, int value){
	if(root==NULL) return true;
	if(root->data>value && isSubtreeLesser(root->left, value)
		&& isSubtreeLesser(root->right, value)){
		return true;
	}else{
		return false;
	}
}

bool isBinarySearchTree(Node *root){

	if(root==NULL) return true;

	if(isSubtreeLesser(root->left, root->data)
		&& isSubtreeGreater(root->right, root->data)
		&& isBinarySearchTree(root->left)
		&& isBinarySearchTree(root->right))
		return true;
	else return false;
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


	levelOrder(root);

	


}
