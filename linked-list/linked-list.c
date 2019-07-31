#include <stdio.h>
#include <malloc.h>


//DEFINING NODE
struct Node{
    int data;
    struct Node *next;
};


//DECLARING HEAD NODE
struct Node *START = NULL;


//FUNCTION TO CREATE NODE
struct Node *createNode(int data){
    struct Node *temp;

    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}


//FUNCTION TO INSERT NODE AT END
void Insert(int data){
    struct Node *temp;
    temp = createNode(data);
    if(START==NULL){
        START = temp;
    }else{
        struct Node *traverseNode;
        traverseNode = START;

        while(traverseNode->next!=NULL){
            traverseNode = traverseNode->next;
        }
        traverseNode->next = temp;
    }
}

//FUNCTION TO INSERT NODE AT BIGINNING
void InsertAtBeginning(int data){
    struct Node *temp;
    temp = createNode(data);
    temp->next = START;
    START = temp;
}


//FUNCTIONT TO INSERT NODE AT N POSITION
void InsertAtN(int data, int position){
    struct Node *temp;
    struct Node *traverseNode;
    int i;
    temp = createNode(data);
    traverseNode = START;

    for(i = 0; i<position-2; i++){
        traverseNode = traverseNode->next;//Here traverseNode is pointing to (n-1) node
    }
    temp->next = traverseNode->next;
    traverseNode->next = temp;
}


//FUNCTION TO DELETE NODE FROM BEGINNING
void DeleteFromBeginning(){
    struct Node *temp;
    temp = START;
    START = temp->next;
    free(temp);
}


//FUNCTION TO DELETE NODE FROM N POSITION
void DeleteFromN(int position){
    struct Node *temp;
    int i;
    for(i=0; i<position-2; i++){
        temp = temp->next;
    }
    struct Node *temp1 = temp->next; //Node n
    temp->next = temp1->next;
    free(temp1);

}


//FUNCTION TO DELETE ELEMENT FROM LAST POSITION
void DeleteLastElement(){
    struct Node *temp;

    temp = START;

    while(temp!=NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("Last node element is %d",temp->data);
}


//FUNCTION TO PRINT ALL NODE VALUES
void Print(){
    struct Node *traverseNode;
    traverseNode = START;

    while(traverseNode!=NULL){
        printf("%d \n", traverseNode->data);
        traverseNode = traverseNode->next;
    }
}






int main(){

    Insert(2);

    Insert(3);

    Insert(4);

    Insert(5);

    Insert(6);


    Print();




}
