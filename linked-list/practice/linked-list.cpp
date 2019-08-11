#include <iostream>

using namespace std;


struct Node{
	int data;
	Node *next;
};

class LinkedList{
	public:
		Node *head = NULL;

		//Function to create node
		Node *createNode(int value){
			Node *newNode = new Node;
			newNode->data = value;
			newNode->next = NULL;
			return newNode;
		}

		//Function to insert node at starting of linked list
		void insertAtStart(int value){
			Node *tempNode = createNode(value);
			tempNode->next = head;
			head = tempNode;
		}

		//Function to insert node at end of linked list
		void insertAtEnd(int value){
			Node *tempNode = createNode(value);
			if(head==NULL){
				head = tempNode;
			}else{
				Node *traverseNode = head;
				while(traverseNode->next!=NULL){
					traverseNode = traverseNode->next;
				}
				traverseNode->next = tempNode;
			}
		}

		//Function to print linked list
		void print(){
			if(head==NULL){
				cout<<"Linked list is empty";
			}else{
				Node *traverseNode = head;
				while(traverseNode!=NULL){
					cout<<traverseNode->data<<"->";
					traverseNode = traverseNode->next;
				}
				cout<<"NULL";
			}
		}


};


int main(){
	LinkedList ll;
	ll.insertAtEnd(10);
	ll.insertAtEnd(20);
	ll.insertAtEnd(30);
	ll.insertAtEnd(40);
	ll.print();
}