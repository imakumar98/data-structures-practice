#include <iostream>


using namespace std;

// void compare(Node *head1, Node *head2);


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

Node  *reverse(Node *head){
	Node *prev = NULL;
	Node *current = head;
	Node *next = NULL;

	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;

	}
	head = prev;
	return head;
}


void compare(Node *head1, Node *head2){

	Node *traverseNode1 = head1;
	Node *traverseNode2 = head2;

	int flag = 0;

	while(traverseNode1!=NULL && traverseNode2!=NULL){

		if(traverseNode1->data!=traverseNode2->data){
			flag = 1;
			break;
		}
		traverseNode1 = traverseNode1->next;
		traverseNode2 = traverseNode2->next;
	}
	if(flag==1){
		cout<<"Linked list is not palindrome";
		return;
	}
	cout<<"Linked list is palindrome";
}



void checkPalindrome(Node *head){

	//1. Break linked list from the middle
	Node *slowTraverseNode = head;
	Node *fastTraverseNode = head->next;

	while(fastTraverseNode!=NULL){
		fastTraverseNode = fastTraverseNode->next;
		if(fastTraverseNode==NULL){break;}
		fastTraverseNode = fastTraverseNode->next;
		slowTraverseNode = slowTraverseNode->next;
	}
	
	Node *startSecond = slowTraverseNode->next;
	slowTraverseNode->next = NULL;
	Node *reversedListHead = reverse(startSecond);

	cout<<endl;
	print(head);

	print(reversedListHead);


	compare(head, reversedListHead);
}


int main(){

	LinkedList ll;
	ll.insert(10);
	ll.insert(20);
	ll.insert(30);
	ll.insert(40);
	ll.insert(40);
	ll.insert(30);
	ll.insert(20);
	ll.insert(10);
	
	print(ll.head);

	checkPalindrome(ll.head);

}