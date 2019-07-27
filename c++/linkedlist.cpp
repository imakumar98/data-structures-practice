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
			cout<<traverseNode->data<<endl;
			traverseNode = traverseNode->next;
		}
		cout<<endl;
	}

	//Function to find nth from last
	

	int nToLast(int n){
		Node *current = head;
		Node *follower = head;

		for(int i=0;i<n;i++){
			current = current->next;
		}
		
		while(current!=NULL){
			current = current->next;
			follower = follower->next;
		}
		
		return follower->data;
	}

	void deleteMiddleElement(){
		Node *slow = head;
		Node *fast = head;

		while(fast!=NULL){
			slow = slow->next;
			fast = fast->next->next;
		}
		cout<<"Middle element is : "<<slow->data;
	}



};


int main(){

	LinkedList ll;
	ll.insert(10);
	ll.insert(20);
	ll.insert(30);
	ll.insert(40);
	//ll.insert(50);
	//int last = ll.nToLast(3);
	//cout<<"N to last element is : "<<last<<endl;
	ll.deleteMiddleElement();
	// ll.print();

}