#include <stdio.h>
#include <malloc.h>


struct Node{
	int data;
	struct Node *next;
};


struct Node *START = NULL;

struct Node *createNode(int x){

	struct Node *temp;

	temp = (struct Node *)malloc(sizeof(struct Node));

	temp->data = x;

	temp->next = NULL;

	return temp;
}


void Insert(int x){

	struct Node *newNode;

	newNode = createNode(x);

	if(START == NULL){
		START = newNode;
		return;
	}

	struct Node *traverseNode = START;

	while(traverseNode->next!=NULL){

		traverseNode = traverseNode->next;
	}

	traverseNode->next = newNode;


}


void Print(){

	struct Node *traverseNode = START;

	while(traverseNode!=NULL){
		printf("\n %d", traverseNode->data);
		traverseNode = traverseNode->next;
	}
	printf("\n");

}

void GetMiddleValue(){

	//Length of node
	struct Node *traverseNode = START;

	while(traverseNode!=NULL){

	}


}

void GetLengthOfLinkedList(){

	struct Node *traverseNode = START;
	int count = 0;
	int middle;
	while(traverseNode!=NULL){
		count++;
		traverseNode = traverseNode->next;
	}

	printf("\n Length of linked list : %d", count);
	middle = (count/2)+1;
	printf("Middle Node : %d", middle);


}


int main(){
	

	Insert(2);

	Insert(3);

	Insert(4);

	Insert(5);

	//Insert(6);

	// GetMiddleValue(); //4

	// Print();

	GetLengthOfLinkedList();
}