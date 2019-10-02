#include <iostream>

using namespace std;

int main(){

	int arr[5] = {3,6,1,8,6};

	int k = 0;

	for(int i=0;i<5;i++){
		if(arr[k]>arr[i]){
			k = i;
		}
	}

	cout<<k;
}


