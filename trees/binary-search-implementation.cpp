#include <iostream>
#include <queue>

using namespace std;


struct Node{
	Node *left;
	Node *right;
	int data;
};

Node *createNode(int value){
	Node *tempNode = new Node();
	tempNode->left = NULL;
	tempNode->right = NULL;
	tempNode->data = value;
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


void InorderTraversal(Node *root){
	if(root==NULL){
		return;
	}
	InorderTraversal(root->left);
	cout<<root->data<<endl;
	InorderTraversal(root->right);

}


void levelOrderTraversal(Node *root){
	if(root==NULL){
		return;
	}
	queue<Node *> Q;
	Q.push(root);
	while(!Q.empty()){
		Node * current = Q.front();
		cout<<current->data<<" ";
		if(current->left!=NULL){
			Q.push(current->left);
		}
		if(current->right!=NULL){
			Q.push(current->right);
		}
		Q.pop();
	}
	cout<<endl;
}

bool is_mirror(Node *r1, Node *r2){
	if(r1==NULL && r2==NULL){
		return true;
	}

	if(r1==NULL || r2==NULL){
		return false;
	}

	if(r1->data==r2->data){
		if(is_mirror(r1->left, r2->right) && is_mirror(r1->right, r2->left)){
			return true;
		}
	}
	return false;

}


int main(){
	Node *root1 = NULL;
	Node *root2 = NULL;

	root1 = Insert(root1, 10);
	root1 = Insert(root1, 20);
	root1 = Insert(root1, 30);
	root1 = Insert(root1, 40);
	root1 = Insert(root1, 50);
	root1 = Insert(root1, 60);
	root1 = Insert(root1, 70);

	levelOrderTraversal(root1);

	root2 = Insert(root2, 70);
	root2 = Insert(root2, 60);
	root2 = Insert(root2, 50);
	root2 = Insert(root2, 40);
	root2 = Insert(root2, 30);
	root2 = Insert(root2, 20);
	root2 = Insert(root2, 10);

	// levelOrderTraversal(root2);


	// if(is_mirror(root1, root2)){
	// 	cout<<"Yes they are mirror of each other";
	// }else{
	// 	cout<<"They are not mirrored";
	// }




	
}