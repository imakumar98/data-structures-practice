#include <iostream>

using namespace std;

void insertionSort(int[], int n);

int main(){
    int A[5] = {8,5,7,3,2};

    insertionSort(A, 5);
}


void insertionSort(int A[], int n){

    for(int i=1; i<n; i++){

        int element_to_insert = A[i];
        int j = i-1;

        while(A[j]>element_to_insert && j!=-1){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = element_to_insert;

    }


    //SHOW OUTPUT
    for(int i=0; i<n; i++){
        cout<<A[i]<<endl;
    }

}