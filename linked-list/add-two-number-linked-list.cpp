#include <iostream>


using namespace std;

struct Node{
	int data;
	struct Node *next;
};

void addTwoNumber(Node *head1, Node* head2);




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


	void insertAtHead(int value){
		Node *newNode = createNode(value);

		newNode->next = head;

		head= newNode;

	}

	void print(){
		Node *traverseNode = head;
		while(traverseNode!=NULL){
			cout<<traverseNode->data<<"->";
			traverseNode = traverseNode->next;
		}
		cout<<"NULL";
		cout<<endl;
	}
};





int main(){

	LinkedList ll1;
	ll1.insertAtHead(9);
	ll1.insertAtHead(4);
	ll1.insertAtHead(5);

	LinkedList ll2;
	ll2.insertAtHead(1);
	ll2.insertAtHead(2);
	ll2.insertAtHead(3);


	addTwoNumber(ll1.head, ll2.head);


	
}


void addTwoNumber(Node *head1, Node *head2){

	int sum = 0;
	int carry = 0;

	Node *traverseNodeOne = head1;
	Node *traverseNodeTwo = head2;

	LinkedList ll3;


	LinkedList ll1;
	LinkedList ll2;
	ll2.head = head2;
	ll1.head = head1;

	ll1.print();

	ll2.print();
	

	


	while(traverseNodeOne!=NULL || traverseNodeTwo!=NULL){

		sum = carry + traverseNodeOne->data + traverseNodeTwo->data;

		if(traverseNodeOne->next==NULL || traverseNodeTwo->next==NULL){
			ll3.insert(sum);

		}else{
			ll3.insert(sum%10);
		}

		
		
		

		//ll3.insertAtHead(sum%10);

		carry = sum/10;

		traverseNodeOne = traverseNodeOne->next;
		traverseNodeTwo = traverseNodeTwo->next;




	}

	ll3.print();


}