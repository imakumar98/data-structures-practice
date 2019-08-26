#include <iostream>

using namespace std;


int main(){

	int arr[5] = {9,7,6,5,4};

	int length = sizeof(arr)/sizeof(arr[0]);
	int temp = 0;

	int swap = 0;
	for(int i=0; i<length-1;i++){
		for(int j=0; j<length-1;j++){
			
			if(arr[j]>arr[j+1]){
				swap = swap + 1;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}


	//Print sorted array
	for(int i=0; i<length;i++){
		cout<<arr[i]<<endl;
	}



	cout<<endl<<swap;
}