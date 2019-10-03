#include <iostream>

using namespace std;

int main(){

	int A[5] = {2,10,18,20,23};
	int B[4] = {4,9,19,25};
	int C[9];


	int lenA = 5;
	int lenB = 4;



	int i=0,j=0,k=0;


	while(i!=5 && j!=4){

		if(A[i]<B[j]){
			C[k] = A[i];
			i++;
			
		}else{
			C[k] = B[j];
			j++;
			
		}
		k++;

	}

	while(i!=5){
		C[k] = A[i];
		i++;
		k++;
			
		
	}


	while(j!=4){
		C[k] = B[j];
		j++;
		k++;
	}



	for(int l=0; l<9;l++){
		cout<<C[l]<<endl;
	}

	cout<<endl<<"Value of I is : "<<i;
	cout<<endl<<"Value of j is : "<<j;






	return 0;
}


// void merge(int A[], int B[]){

// }

