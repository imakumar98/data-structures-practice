#include <iostream>
#include <string>

using namespace std;

void selectionSort(int[], int);

int main(){
    int A[6] {8,6,3,2,5,4};

    selectionSort(A, 6); 
}


void selectionSort(int A[], int n){

    for(int i=0; i<n-1; i++){
        
        int minimum_index = i;
        int j;
        for(j=i+1;j<n;j++){
            if(A[j]<A[minimum_index]){
               
                minimum_index = j;
            }
        }
        cout<<endl<<"Minimum index: "<<minimum_index;
        int temp = A[minimum_index];
        A[minimum_index] = A[i];
        A[i] = temp;
        
    }



    //SHOW OUTPUT
    for(int l=0; l<n; l++){
        cout<<endl<<A[l];
    }
}


