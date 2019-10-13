#include <iostream>

using namespace std;


int partition(int[], int, int);
void quickSort(int[], int, int);




int partition(int A[], int l, int h){
    int pivot = A[l];

    int i = l;
    int j = h;

    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);

        if(i<j){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp; 
        }
    }while(i<j);
   
    int temp2 = A[l];
    A[l] = A[j];
    A[j] = temp2;
    return j;

    
}


void quickSort(int A[], int l, int h){
    int j;
    if(l<h){
        j = partition(A, l, h);
        quickSort(A, l, j);
        quickSort(A,j+1,h);

    }
}

int main(){

    int A[] = {11,13,7,12,16,9,24,5,10,3,INT32_MAX}, n=11, i;

    quickSort(A, 0, 10);

    for(int i=0; i<10; i++){
        cout<<A[i]<<endl;
    }
}