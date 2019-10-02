#include <iostream>

using namespace std;

void insertionSort(int[], int);


int main(){
	int arr[5] = {8,5,7,3,2};
	
	int length = sizeof(arr)/sizeof(arr[0]);

	insertionSort(arr, length);
	return 0;
}


void selectionSort(int arr[], int n){

	int temp = 0;

	for(int i=0; i<n-1;i++){

		// int j = arr[i];
		// int k = arr[i];

		

		int k = i;


		for(int j = i+1;j<n; j++){

			if(arr[k]<arr[j]){

				
				k = j;
			}
		}

		temp = arr[i];

		arr[i] = arr[k];

		arr[k] = arr[i];


	}

	for(int i=0; i<n;i++){
		cout<<arr[i]<<endl;
	}




}