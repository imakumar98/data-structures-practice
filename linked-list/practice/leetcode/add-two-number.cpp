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



void addTwoNumber(Node *ll1, Node *ll2){

	LinkedList ll3;

	Node *traverseNodeOne = ll1;
	Node *traverseNodeTwo = ll2;
	int sum = 0;
	int carry = 0;
	while(traverseNodeOne || traverseNodeTwo){

		sum = traverseNodeOne->data + traverseNodeTwo->data + carry;

		ll3.insertAtEnd(sum%10);

		carry = sum/10;

		traverseNodeOne = traverseNodeOne->next;
		traverseNodeTwo = traverseNodeTwo->next;
	}

	ll3.print();

}





int main(){
	LinkedList ll1;

	ll1.insertAtEnd(2);
	ll1.insertAtEnd(3);
	ll1.insertAtEnd(4);


	LinkedList ll2;

	ll2.insertAtEnd(3);
	ll2.insertAtEnd(4);
	ll2.insertAtEnd(5);
	
	
	ll1.print();
	ll2.print();


	addTwoNumber(ll1.head,ll2.head);
	


	

	
}