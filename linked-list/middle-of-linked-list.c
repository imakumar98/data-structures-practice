#include <stdio.h>
#include <malloc.h>

struct Node *createNode(int x);
void Insert();
void Print();
int GetLengthOfLinkedList();
int GetValueByIndex(int x);


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

	

	int length;

	length = GetLengthOfLinkedList();

	int middleIndex = (length/2)+1;

	int value = GetValueByIndex(middleIndex);

	printf("Middle value of linked list :  %d", value);



}

void GetMiddleValueMethodTwo(){

	struct Node *traverseNodeOne = START;
	struct Node *traverseNodeTwo = START;

	//printf("Test function : %d", traverseNodeOne->next->next->data);

	while(traverseNodeTwo!=NULL && traverseNodeTwo->next!=NULL){
		traverseNodeOne = traverseNodeOne->next;
		traverseNodeTwo = traverseNodeTwo->next->next;
	}

	printf("Middle value of linked list : %d", traverseNodeOne->data);
}

int GetLengthOfLinkedList(){

	struct Node *traverseNode = START;
	int count = 0;
	int middle;
	int i;
	while(traverseNode!=NULL){
		count++;
		traverseNode = traverseNode->next;
	}

	return count;
}


//FUNCTION TO PRINT NODE VALUE NBY INDEX
int GetValueByIndex(int index){

	struct Node *temp = START;
	int i;
	for(i=0; i<index-1;i++){
		temp = temp->next;
	}
	return temp->data;

	
}


int main(){
	

	Insert(2);

	Insert(3);

	Insert(4);

	Insert(5);

	Insert(6);

	Insert(7);

	Insert(8);

	GetMiddleValueMethodTwo();

	//GetMiddleValue();

}