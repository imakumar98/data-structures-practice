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

		//Function to insert node at n position of linked list
		void insertAtN(int value, int position){
			Node *tempNode = createNode(value);
			Node *traverseNode = head;
			for(int i=0;i<position-2;i++){
				traverseNode = traverseNode->next;
			}
			tempNode->next = traverseNode->next;
			traverseNode->next = tempNode;
			
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

		//Function to delete node from starting
		void deleteFromStart(){
			head = head->next;
		}

		//Function to delete node from n position
		void deleteFromN(int position){
			Node *traverseNode = head;
			for(int i=0; i<position-2;i++){
				traverseNode = traverseNode->next;
			}
			traverseNode->next = traverseNode->next->next;
		}

		//Function to delete node from end
		void deleteFromEnd(){
			Node *traverseNode = head;
			while(traverseNode->next->next!=NULL){
				traverseNode = traverseNode->next;
			}
			traverseNode->next = NULL;
			delete traverseNode->next;
		}

		//Function to find length of linked list
		void length(){
			Node *traverseNode = head;
			int length = 0;
			while(traverseNode!=NULL){
				length = length + 1;
				traverseNode = traverseNode->next;
			}
			cout<<"Length of linked list : "<<length;
		}

		//Function to get middle value of linked list
		void getMiddle(){
			Node *traverseNodeOne = head;
			Node *traverseNodeTwo = head;
			while(traverseNodeTwo!=NULL && traverseNodeTwo->next!=NULL){
				traverseNodeOne = traverseNodeOne->next;
				traverseNodeTwo = traverseNodeTwo->next->next;
				
			}
			cout<<"Middle value of linked list : "<<traverseNodeOne->data;
		}

		//Function to print linked list
		void print(){
			if(head==NULL){
				cout<<"Linked list is empty";
			}else{
				Node *traverseNode = head;

				while(traverseNode!=NULL){
					cout<<"|"<<traverseNode->data<<"|"<<traverseNode->next<<"|"<<"->";
					traverseNode = traverseNode->next;
				}
				cout<<"NULL"<<endl;
			}
		}


};


//Function to merge two sorted linked list
void mergeTwoSortedLinkedList(Node *head1, Node *head2){
	Node *traverseNodeOne = head1;
	Node *traverseNodeTwo = head2;

	LinkedList ll3;

	while(traverseNodeOne!=NULL && traverseNodeTwo!=NULL){
		if(traverseNodeOne->data<=traverseNodeTwo->data){
			ll3.insertAtEnd(traverseNodeOne->data);
			traverseNodeOne = traverseNodeOne->next;
		}else{
			ll3.insertAtEnd(traverseNodeTwo->data);
			traverseNodeTwo = traverseNodeTwo->next;
		}
	}

	while(traverseNodeOne!=NULL){
		ll3.insertAtEnd(traverseNodeOne->data);
		traverseNodeOne = traverseNodeOne->next;
	}

	while(traverseNodeTwo!=NULL){
		ll3.insertAtEnd(traverseNodeTwo->data);
		traverseNodeTwo = traverseNodeTwo->next;
	}

	cout<<"Resultant linked list after merging : ";
	ll3.print();


}


int main(){
	LinkedList ll1;
	LinkedList ll2;
	
	ll1.insertAtEnd(10);
	ll1.insertAtEnd(20);
	ll1.insertAtEnd(30);
	ll1.insertAtEnd(40);

	ll2.insertAtEnd(15);
	ll2.insertAtEnd(25);
	ll2.insertAtEnd(35);
	ll2.insertAtEnd(45);

	mergeTwoSortedLinkedList(ll1.head, ll2.head);
}