#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};


Node *START = NULL;

Node *createNode(int value){
    Node *temp = new Node;
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void Insert(int val){
    if(START==NULL){
        START = createNode(val);
    }else{
        Node *traverse = START;
        while(traverse->next!=NULL){
            traverse = traverse->next;
        }
        traverse->next = createNode(val);
    }
}

void print(){
    Node *traverse = START;
    while(traverse!=NULL){
        cout<<traverse->data<<" ";
        traverse = traverse->next;
    }
   
}


int main(){
    Insert(10);
    Insert(20);
    Insert(30);

    print();
}