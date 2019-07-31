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

void mergeLinkedList(Node *head1, Node *head2){
	Node *traverseNodeOne = head1;
	Node *traverseNodeTwo = head2;
	LinkedList l3;

	while(traverseNodeOne!=NULL && traverseNodeTwo!=NULL){

		if(traverseNodeOne->data<traverseNodeTwo->data){
			l3.insert(traverseNodeOne->data);
			traverseNodeOne = traverseNodeOne->next;
		}else{
			l3.insert(traverseNodeTwo->data);
			traverseNodeTwo = traverseNodeTwo->next;
		}
	}

	while(traverseNodeOne!=NULL){
		l3.insert(traverseNodeOne->data);
		traverseNodeOne = traverseNodeOne->next;
	}

	while(traverseNodeTwo!=NULL){
		l3.insert(traverseNodeTwo->data);
		traverseNodeTwo = traverseNodeTwo->next;
	}

	cout<<"Merged linked list"<<endl;
	print(l3.head);
}

int main(){
	LinkedList ll1;
	LinkedList ll2;

	ll1.insert(10);
	ll1.insert(20);
	

	ll2.insert(15);
	ll2.insert(25);
	

	print(ll2.head);



	print(ll1.head);

	mergeLinkedList(ll1.head, ll2.head);
}