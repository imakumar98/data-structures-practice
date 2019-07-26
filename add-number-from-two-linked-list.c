#include <stdio.h>
#include <malloc.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *l1 = NULL;
struct Node *l2 = NULL;

struct Node *createNode(int value){
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = value;
	temp->next = NULL;
	return temp;
}

void Insert(struct Node *head, int value){
	struct Node *temp = createNode(value);

	if(head==NULL){
		head = temp;
	}else{
		struct Node *traverseNode = head;
		while(traverseNode->next!=NULL){
			traverseNode = traverseNode->next;
		}
		traverseNode->next = temp;
	}
}

void Print(struct Node *head){
	struct Node *traverseNode = head;

	printf("Value %d", traverseNode->data);

	/*while(traverseNode!=NULL){
		printf("%d", traverseNode->data);
		traverseNode = traverseNode->next;
	}*/
	printf("Ending of linked list\n");
}

int main(){

	Insert(l1, 2);
	Insert(l1, 4);
	Insert(l1, 3);


	Insert(l2, 5);
	Insert(l2, 6);
	Insert(l2, 4);

	Print(l1);

}
