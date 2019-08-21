#include <iostream>
#include <queue>

using namespace std;


struct Node{
	Node *left;
	int data;
	Node *right;
};

Node *createNode(int data){
	Node *tempNode = new Node;
	tempNode->data = data;
	tempNode->left = NULL;
	tempNode->right = NULL;
	return tempNode;
}

Node *Insert(Node *root, int data){
	if(root==NULL){
		root = createNode(data);
	}else if(data<=root->data){
		root->left = Insert(root->left, data);
	}else{
		root->right = Insert(root->right, data);
	}
	return root;
}


void levelOrderTraversal(Node *root){
	if(root==NULL)return;
	queue<Node *> Q;
	Q.push(root);
	while(!Q.empty()){
		Node *current = Q.front();
		cout<<current->data<<" ";
		if(current->left!=NULL){
			Q.push(current->left);
		}
		if(current->left!=NULL){
			Q.push(current->right);
		}
		Q.pop(); //remooving element at front
	}

}



void preOrderTraversal(Node *root){
	if(root==NULL)return;

	cout<<root->data<<" ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root){
	if(root==NULL)return;
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
	cout<<root->data<<" ";
}

void inOrderTraversal(Node *root){
	if(root==NULL)return;
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
	cout<<root->data<<" ";
}


int main(){

	Node *root = NULL;

	root = Insert(root, 15);

	root = Insert(root, 10);

	root = Insert(root, 20);

	root = Insert(root, 8);

	root = Insert(root, 12);

	root = Insert(root, 17);

	root = Insert(root, 25);

	preOrderTraversal(root);
}