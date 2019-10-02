#include <iostream>

using namespace std;

void bubbleSort(int[], int);

int main(){
	
	int arr[5] = {8,5,7,3,2};
	




	int length = sizeof(arr)/sizeof(arr[0]);

	bubbleSort(arr, length);


	
}


void bubbleSort(int arr[], int n){
	int number_of_comparisons = 0;
	int temp = 0;
	for(int i=0; i<n-1;i++){
		for(int j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				number_of_comparisons++;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(int i=0; i<n;i++){
		cout<<arr[i];
	}

	cout<<"Number of comparison : "<<number_of_comparisons;
}
