#include <iostream>

using namespace std;

int main(){


    char A[] = "python";
    int length = 0;
    while(A[length]!='\0'){
        length = length + 1;
    }

    char B[length];
    int index=0;
    // B[index] = A[length];

    B[index] = 'A';

    cout<<B;


    // cout<<index;
    // while(length>=0){
    //     B[index] = A[length];
    //     cout<<B;
    //     index++;
    //     length--;
    // }

    // printf("%s",B);

    
}