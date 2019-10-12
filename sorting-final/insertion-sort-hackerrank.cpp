#include <iostream>

using namespace std;

void insertionSort(int[], int n);

int main(){
    int A[14] = {1, 3, 5, 9, 13, 22, 27, 35, 46, 51, 55, 83, 87, 23};

    insertionSort(A, 14);
}


void insertionSort(int arr[], int n){

    int x = arr[n-1];

    int j = n-2;

    int currentIndex = n-1;

    while(j!=-1 && x<arr[j]){
        if(arr[j]<x){
            arr[currentIndex] = x;
        }else{
            arr[currentIndex] = arr[j];
            currentIndex = j;
        }
        for(int a=0; a<n; a++){
            cout<<arr[a]<<" ";
        }
        cout<<endl;
        j--;
    }
    


    //SHOW OUTPUT
    // for(int i=0; i<n; i++){
    //     cout<<A[i]<<endl;
    // }

}