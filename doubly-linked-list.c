#include <stdio.h>

struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};

struct Node *head = NULL;

void InsertAtHead(int x){

	struct Node *newNode = GetNewNode(x);
	
	if(head == NULL){
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;



}

void InsertAtTail(int x){
	struct Node *newnode = GetNewNode(x);


	if(head==NULL){
		head = newNode;
		return;
	}
	struct Node *traverseNode = head;
	while(traverseNode->next!=NULL){
		traverseNode = traverseNode->next;
	}
	traverseNode->next = newNode;
}


struct Node *GetNewNode(int x){

	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = x;
	temp->prev = NULL;
	temp->next = NULL;

	return temp;
}





int main(){


}

