#include <iostream>

using namespace std;

int main(){
    

    int A[10] = {6,3,9,10,15,6,8,12,3,6};
    int largest = A[0];

     //Find largest element
    for(int i=0; i<10; i++){
        if(A[i]>largest){
            largest = A[i];
        }
    }

    cout<<"Largest element is : "<<largest<<endl;
    int B[largest+1];


    //Initialize B as 0
    for(int i=0; i<largest+1; i++){
        B[i] = 0;
    }

    int val;
    for(int i=0; i<10;i++){
        val = A[i];
        B[val] = B[val] + 1;
    }

    int frequency;
    int j = 0;
    for(int i=0; i<largest+1; i++){
        if(B[i]>0){
            frequency = B[i];
            while(frequency>0){
                A[j] = i;
                j++;
                frequency--;
            }

        }
    }


    //Print A after sort
    for(int i=0; i<10; i++){
        cout<<A[i]<<" ";
    }




    //Print B
    // for(int i=0; i<largest+1;i++){
    //     cout<<B[i]<<" ";
    // }


    // int B[]


}