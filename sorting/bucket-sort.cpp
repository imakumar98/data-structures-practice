#include <iostream>

using namespace std;

int findMax(int[], int);


struct Node{
    int data;
    Node *next;
};


int main(){
    int A[10] = {6,8,3,10,15,6,9,12,6,3};

    int max = findMax(A, 10);

    Node B[max];



    
}


int findMax(int arr[],int n){
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
