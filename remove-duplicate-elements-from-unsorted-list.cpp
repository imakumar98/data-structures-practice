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

void removeDuplicates(Node *head){
	Node *traverseNode = head;
	Node *traverseNodeBack = head;

	//Initialize array with zero
	int a[25];
	for(int i=0; i<25; i++){
		a[i] = 0;
	}

	

	for(int i=0; i<25; i++){
		cout<<a[i];
	}

	while(traverseNode!=NULL && traverseNode->next!= NULL){
		
		// if(a[traverseNode->next->data]==1){
		// 	traverseNode->next = traverseNode->next->next;
		// 	free(traverseNode->next);
		// }
		// a[traverseNode->data] = 1;
		// traverseNode = traverseNode->next;

		if(a[traverseNode->data]==1){

		}
		a[traverseNode->data] = 1;
		traverseNode->data = traverseNode->next;


	}

	print(head);


}


int main(){
	LinkedList ll;
	ll.insert(10);
	ll.insert(5);
	ll.insert(20);
	ll.insert(15);
	ll.insert(5);
	ll.insert(8);
	ll.insert(12);
	ll.insert(8);
	removeDuplicates(ll.head);
	//print(ll.head);
}