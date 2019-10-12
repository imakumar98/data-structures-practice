#include <iostream>


using namespace std;


void bubbleSort(int[], int);

int main(){
    int A[5] = {1,2,3,4,5};

    bubbleSort(A, 5);

}



void bubbleSort(int A[], int n){

    int flag;
    for(int i=0; i<n-1;i++){
        flag = 0;
        for(int j=0; j<n-i-1; j++){

            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

                flag++;
                

            }
        }
        if(flag==0) break;
    }

    cout<<"Number of swap "<<flag<<endl;


    //SHOW OUTPUT
    for(int i=0; i<n; i++){
        cout<<A[i]<<endl;
    }
}

// void swap(){

// }