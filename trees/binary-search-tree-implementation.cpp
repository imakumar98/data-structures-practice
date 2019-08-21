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

// void maxFromTree(Node *root){
// 	cout<<"Hello";
// 	// if(root==NULL){
// 	// 	cout<<"No element in tree";
// 	// }else{
// 	// 	Node *traverseNode = root;
// 	// 	while(traverseNode->right!=NULL){
// 	// 		traverseNode = traverseNode->right;
// 	// 	}
// 	// 	cout<<"Maximum number in tree"<<traverseNode->data;
// 	// }
// }



int main(){

	Node *root = NULL;

	root = Insert(15, root);

	root = Insert(10, root);

	root = Insert(20, root);

	root = Insert(8, root);

	root = Insert(12, root);

	root = Insert(17, root);

	root = Insert(25, root);


	//maxFromTree(root);


	int numberToSearch = 16;

	if(Search(root, numberToSearch)){
		cout<<"Number exist in tree";
	}else{
		cout<<"Number not exist in tree";
	}


}
