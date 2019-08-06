#include <iostream>


using namespace std;


int main(){
	int a[10] = {10,5,90,40,54,27,23,94,83,39};

	int largest = INT_MIN;

	int second_largest = INT_MIN;

	for(int i=0;i<9;i++){

		if(a[i]>largest){
			second_largest = largest;
			largest = a[i];
		}else if(a[i]>second_largest && a[i]!=largest){
			second_largest = a[i];
		}
	}

	cout<<second_largest;
}