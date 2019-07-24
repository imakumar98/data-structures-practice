#include <stdio.h>
#include <malloc.h>


struct Node *GetNewNode(int x);

struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};

struct Node *head = NULL;

void InsertAtHead(int x){

	struct Node *newNode;
	newNode = GetNewNode(x);
	
	if(head == NULL){
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;



}

void InsertAtTail(int x){
	struct Node *temp;

	temp = GetNewNode(x);


	if(head==NULL){
		head = temp;
		return;
	}
	struct Node *traverseNode = head;
	while(traverseNode->next!=NULL){
		traverseNode = traverseNode->next;
	}
	traverseNode->next = temp;
}


struct Node *GetNewNode(int x){

	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->prev = NULL;
	temp->next = NULL;

	return temp;
}

void Print(){
	struct Node *temp = head;
	printf("Forward: \n");
	while(temp!=NULL){
		printf("%d \n ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}


void ReversePrint(){
	struct Node *temp = head;


	//Go to last node
	while(temp->next!=NULL){
		temp = temp->next;
	}
	printf("Reverse : ");


	//Traversing reverse
	while(temp != NULL){
		printf("%d \n", temp->data);
		temp = temp->prev;
	}

	printf("\n");


}





int main(){

	InsertAtTail(2);

	InsertAtTail(3);

	InsertAtTail(4);

	InsertAtTail(5);

	InsertAtHead(10);

	ReversePrint();

	//Print();
}

