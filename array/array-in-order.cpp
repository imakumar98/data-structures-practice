#include <iostream>

using namespace std;


int main(){
	int arr[6] = {1,0,0,1,0,1};

	//int hash_array[2];

	int variable=0;
	for(int i=0;i<6;i++){
		if(arr[i]>0){
			variable = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = variable;
		}
	}

	for(int i=0;i<6;i++){
		cout<<arr[i]<<endl;
	}
}