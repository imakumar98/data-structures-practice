#include <iostream>
#include <stack>


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

void inOrder(Node *root){
	Node *current = root;
	stack<Node *> S;


	while(true){

		while(current!=NULL){
			S.push(current);
			current = current->left;
		}

		if(S.empty()){
			break;
		}

		current = S.top();
		S.pop();
		cout<<current->data<<" ";
		current = current->right;
	}



	

}



int main(){
	Node *root = NULL;
	root = Insert(10 ,root);
	root = Insert(12 ,root);
	root = Insert(45 ,root);
	root = Insert(44 ,root);
	root = Insert(54 ,root);
	root = Insert(64 ,root);
	root = Insert(24 ,root);

	inOrder(root);
}

