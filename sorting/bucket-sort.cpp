#include <iostream>

using namespace std;

int findMax(int[], int);


int main(){
    int A[10] = {6,8,3,10,15,6,9,12,6,3};



    
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
