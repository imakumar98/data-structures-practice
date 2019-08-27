#include <iostream>

using namespace std;

int main(){
	int arr[5] = {1,3,5,7,9};
	int min = 100000;
	int max = 0;

	int sum = 0;

	for(int i=0; i<5;i++){
		sum = sum + arr[i];

		if(arr[i]>max){
			max = arr[i];
		}

		if(arr[i]<min){
			min = arr[i];
		}
	}





	cout<<"Maximum value we found : "<<sum - min<<endl;
	cout<<"Minimum value we found : "<<sum - max<<endl;
}