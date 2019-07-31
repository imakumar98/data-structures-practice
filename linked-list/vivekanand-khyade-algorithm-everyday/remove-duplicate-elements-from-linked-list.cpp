#include <iostream>

using namespace std;

struct Node{
	int data;
	struct Node *next;
};

class LinkedList{

public:

	Node *head = NULL;


	Node *createNode(int value){
		Node *temp = new Node;
		temp->data = value;
		temp->next = NULL;
		return temp;
	}

	void insert(int value){
		Node *temp = createNode(value);


		if(head==NULL){
			head = temp;
			return;
		}
		Node *traverseNode = head;
		while(traverseNode->next!=NULL){
			traverseNode = traverseNode->next;
		}
		traverseNode->next = temp;
	}

};

void print(Node *head){
	Node *traverseNode = head;
	while(traverseNode!=NULL){
		cout<<traverseNode->data<<"->";
		traverseNode = traverseNode->next;
	}
	cout<<"NULL";
	cout<<endl;

}


int main(){
	
}