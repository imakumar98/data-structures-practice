#include <iostream>

using namespace std;



struct Node{
    int data;
    Node *next;
};

Node *START = NULL;




Node *createNode(int value){
    Node *tempNode = new Node;
    tempNode->data = value;
    tempNode->next = NULL;
    return tempNode;
}



//arr = {START, START};


int main(){
    
    // START = createNode(10);

    // cout<<"Variable START has value : "<<START<<endl;

    // cout<<"Variable START data has value : "<<START->data<<endl;

    // cout<<"Variable START next has value : "<<START->next<<endl;

    START = new Node[10];



}