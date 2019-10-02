#include <iostream>


using namespace std;

void insertionSort(int, int[]);

int main(){

	int arr[5] = {2, 4, 6, 8, 3};

	insertionSort(5, arr);
}

void insertionSort(int n, int arr[]) {

    // int number = arr[n-1];
    // int j = n-1;
    // for(int i=n-2;i>=0;i--){
    // 	if(arr[i]<number){

    // 	}else{
    // 		arr[j] = number;
    // 		for(int k=0; k<n;k++){
    //         	cout<<arr[k]<<" ";
    //         }
    //         cout<<endl;
            
        	
    // 	}
    // }


    int j = n-1;
    int number = arr[n-1];
    for(int i=n-2;i>=0;i--){
    	if(arr[i]<number){

    	}else{
    		arr[j] = number;
    		for(int k=0; k<n;k++){
            	cout<<arr[k]<<" ";
            }
            cout<<endl;
            number--;
            
        	
    	}
    }







    // while(j > -1 && arr[j]<number){
    //     arr[j+1] = number;
    //     for(int i=0; i<n;i++){
    //         cout<<arr[i]<<" ";
    //         cout<<"Hello";
    //     }
    //     cout<<endl;
    //     j--;
    // }

}