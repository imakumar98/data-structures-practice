#include <iostream>
#include <vector>

using namespace std;


void countingSort(vector<int>);


int main(){

    vector<int> arr = {10,40,99, 50, 30,25};

    countingSort(arr);
}


void countingSort(vector<int> arr) {

    int arr2[100];

    for(int i=0; i<100; i++){
        arr2[i] = 0;
    }

    int val;
    for(int i=0; i<arr.size(); i++){
        val = arr[i];
        arr2[val] = arr2[val] + 1;
    }

    int j=0;
    int frequency;
    for(int i=0;i<100;i++){
        if(arr2[i]>0){
            frequency = arr2[i];
            while(frequency>0){
                arr[j] = i;
                j++;
                frequency--;
            }
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }



}