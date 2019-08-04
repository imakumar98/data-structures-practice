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

}


int main(){
	
}