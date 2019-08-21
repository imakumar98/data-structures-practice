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

bool Search(Node *root, int data){
	if(root==NULL){
		return false;
	}
	else if(data==root->data){
		return true;
	}else if(data<=root->data){
		return Search(root->left, data);
	}else{
		return Search(root->right, data);
	}
}

void maxFromTree(Node *root){
	
	if(root==NULL){
		cout<<"No element in tree";
	}else{
		Node *traverseNode = root;
		while(traverseNode->right!=NULL){
			traverseNode = traverseNode->right;
		}
		cout<<"Maximum number in tree : "<<traverseNode->data;
	}
}

void levelOrder(Node *root){

	if(root==NULL) return;
	queue<Node *> Q;
	Q.push(root);

	while(!Q.empty()){
		Node* current = Q.front();
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


int maxUsingRecursion(Node *root){
	if(root==NULL){
		cout<<"Tree is empty";
		return -1;
	}else if(root->left==NULL){
		return root->data;
	}
	return maxUsingRecursion(root->left);
}

int heightOfBinaryTree(Node *root){
	if(root==NULL){
		return -1;
	}

	int leftHeight = heightOfBinaryTree(root->left);
	int rightHeight = heightOfBinaryTree(root->right);

	if(leftHeight>rightHeight){
		return leftHeight+1;
	}else{
		return rightHeight + 1;
	}	
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

	// maxFromTree(root);


	// int numberToSearch = 16;

	// if(Search(root, numberToSearch)){
	// 	cout<<"Number exist in tree";
	// }else{
	// 	cout<<"Number not exist in tree";
	// }


}
