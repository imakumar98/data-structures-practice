#include <iostream>

using namespace std;

int main(){

	int arr[5] = {10,40,49,100, 99};
	int max = arr[0];
	for(int i=0; i<5;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}

	cout<<max;
}