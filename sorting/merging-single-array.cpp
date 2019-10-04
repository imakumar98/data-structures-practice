#include <iostream>


using namespace std;


int main(){

	int A[8] = {2,5,8,12,3,6,7,10};

	int B[8];

	int low = 0;

	int mid = 3;

	int high = 7;

	int i = 0;

	int j = mid+1;

	int k = 0;



	while(i<=mid && j<=high){
		if(A[i]<A[j]){
			B[k] = A[i];
			i++;
		}else{
			B[k] = A[j];
			j++;
		}
		k++;
	}


	while(i<=mid){
		B[k] = A[i];
		i++;
	}

	while(j<=high){
		B[k] = A[j];
		j++;
	}


	//PRINT B
	for(int a=0;a<8;a++){
		cout<<B[a]<<endl;
	}




}