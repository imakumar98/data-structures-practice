#include <iostream>

using namespace std;

int main(){
	
	int arr[5] = {8,5,7,3,2};
	int temp;

	for(int i=0; i<arr.size(); i++){
		if(arr[i]>arr[i+1]){
			temp = arr[i];
			arr[i] = arr[i+1];
		}
	}


	//Print all the elements
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<endl;
	}
}
