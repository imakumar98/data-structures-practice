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


void printLinkedListByHead(Node *head){
	
		Node *traverseNode = head;
		while(traverseNode!=NULL){
			cout<<traverseNode->data<<"->";
			traverseNode = traverseNode->next;
		}
		cout<<"NULL";
		cout<<endl;
	
}

Node *splitLinkedListFromMiddle(Node *head){
	Node *slowtraverseNode = head;
	Node *fastTraverseNode = head->next;

	while(fastTraverseNode!=NULL){
		fastTraverseNode = fastTraverseNode->next;
		if(fastTraverseNode==NULL){break;}
		fastTraverseNode = fastTraverseNode->next;
		slowtraverseNode = slowtraverseNode->next;
		
	}
	return slowtraverseNode->next;
	
}


int main(){

	LinkedList ll;
	ll.insert(10);
	ll.insert(20);
	ll.insert(30);
	ll.insert(40);
	ll.insert(50);

	ll.print();

	Node *secondPart = splitLinkedListFromMiddle(ll.head);

	printLinkedListByHead(secondPart);
	

}