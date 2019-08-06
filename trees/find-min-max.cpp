#include <iostream>

using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
}

class BinaryTree{

	public:
		Node *root = NULL;

		Node *createNode(data){
			Node *newNode = new Node;
			newNode->data = data;
			newNode->left = NULL;
			newNode->right = NULL;
			return newNode;
		}

		Node *insert(data){
			Node *newNode = createNode(data);
			if(root==NULL){
				root =  newNode;
			}else if(data<=root->data){
				root->left = insert(root->left, data)
			}else{
				root->right = insert(root->right, data);
			}
			return root;
		}

		int max(){

			if(root==NULL){
				cout<<"Tree is empty";
				return -1;
			}

			Node *traverseNode = root;
			while(traverseNode->right!=NULL){
				traverseNode = traverseNode->right;
			}
			return traverseNode->data;
		}

		int min(){

			if(root==NULL){
				cout<<"Tree is empty";
				return -1;
			} 
			Node *traverseNode = root;
			while(traverseNode->left!=NULL){
				traverseNode = traverseNode->left;
			}
			return traverseNode->data;
		}

		int minUsingRecursion(root){

			if(root==NULL){
				return -1;
			}
			else if(root->left==NULL){
				return root->data;
			}
			
			return minUsingRecursion(root->left);
		


		}

}


int main(){
	BinaryTree
}