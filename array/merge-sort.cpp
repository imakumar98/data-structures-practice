#include <iostream>

using namespace std;

void mergeSort(){
	int i=0;
	int j=0;
	int k =0;

	int arr1[5] = {5,10,40,54,90};
	int arr2[5] = {23,27,39,83,94};

	int arr3[10];

	int length_of_arr1 = 5;

	int length_of_arr2 = 5;

	while(i<length_of_arr1 && j<length_of_arr2){

		if(arr1[i]<arr2[j]){
			arr3[k] = arr1[i];
			i = i+1;
		
		}else{
			arr3[k] = arr2[j];
			j = j+1;

		}
		k=k+1;
	}

	while(i<length_of_arr1){
		arr3[k] = arr1[i];
		i++;
		k++; 
	}

	while(j<length_of_arr2){
		arr3[k] = arr2[j];
		j++;
		k++;
		
	}

	//Print arr3

	for(int l=0;l<10;l++){
		cout<<arr3[l]<<endl;
	}
}

int main(){

	

	mergeSort();


}

