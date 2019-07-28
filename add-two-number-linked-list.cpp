#include <iostream>

using namespace std;

//DEFINE NODE
struct Node{
	int data;
	struct Node *next;
};


//LINKED LIST CLASS
class LinkedList{

public:

	Node *head = NULL;

	Node *getHead(){
		return head;
	}


	//FUNCTION TO CREATE NODE
	Node *createNode(int value){
		Node *temp = new Node;
		temp->data = value;
		temp->next = NULL;
		return temp;
	}

	//FUNCTION TO INSERT NODE
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

	void print(){
		Node *traverseNode = head;
		while(traverseNode!=NULL){
			cout<<traverseNode->data<<"->";
			traverseNode = traverseNode->next;
		}
		cout<<"NULL"<<endl;

	}

	



};

void addTwoNumber(Node *head1, Node *head2){
	Node *traverseNode1 = head1;
	Node *traverseNode2 = head2;
	
	LinkedList ll3;

	int sum;

	int carry = 0;

	while(traverseNode1!=NULL){
		sum = traverseNode1->data + traverseNode2->data + carry;

		ll3.insert(sum%10);
		traverseNode1 = traverseNode1->next;
		traverseNode2 = traverseNode2->next;
		carry = sum/10;

	}
	// cout<<"Test message : "<<traverseNode1->data;
	cout<<"New Linked list after addition : ";
	ll3.print();
	cout<<endl;
}

int main(){
	LinkedList ll1;
	ll1.insert(9);
	ll1.insert(7);
	ll1.insert(8);


	ll1.print();

	LinkedList ll2;
	ll2.insert(8);
	ll2.insert(7);
	ll2.insert(5);

	ll2.print();

	addTwoNumber(ll1.head, ll2.head);


}