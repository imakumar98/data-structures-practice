#include <iostream>

using namespace std;

int main(){

    char A[] = "WELCOME";
    int i =0;
    while(A[i]!='\0'){
        int ascii = (int)A[i];
        A[i] = (char)(ascii + 32);
        i++;
    }


    cout<<A;

    return 0;
}