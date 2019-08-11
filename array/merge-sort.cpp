#include <iostream>

using namespace std;

void mergeSort(int arr1[], int arr2[]){
	int i=0;
	int j=0;
	int k =0;

	

	int arr3[10];

	int length_of_arr1 = sizeof(arr1)/sizeof(arr1[0]);

	int length_of_arr2 = sizeof(arr2)/sizeof(arr2[0]);

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

	
}

int main(){

	int arr[10] = {5,10,40,54,90,23,27,39,83,94};

	int arr1[];
	int arr2[];

	int mid;

	int length = sizeof(arr)/sizeof(arr[0]);

	mid = length/2;

	int left = mid;

	int right = length = mid;

	for(int i=0; i<left;i++){
		left[i] = arr[i];
	}
	


}

