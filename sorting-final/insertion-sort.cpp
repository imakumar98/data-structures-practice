#include <iostream>

using namespace std;

void insertionSort(int[], int n);

int main(){
    int A[5] = {2, 1, 3, 1, 2};

    insertionSort(A, 5);
}


void insertionSort(int A[], int n){

    int shift = 0;

    for(int i=1; i<n; i++){
     
        int element_to_insert = A[i];
        int j = i-1;

        while(A[j]>element_to_insert && j!=-1){
            A[j+1] = A[j];
            shift = shift + 1;
            j--;
        }
        cout<<"Index"<<j+1;
        A[j+1] = element_to_insert;


        
    }

    for(int l=0; l<n; l++){
        cout<<endl<<A[l]<<" ";
    }
    cout<<"Number of shifts : "<<shift;


    //SHOW OUTPUT
    

}