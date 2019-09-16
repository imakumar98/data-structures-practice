#include <iostream>


using namespace std;


int main(){

        int arr1[3] = {1,3,5};

        int arr2[3] = {2,4,6};

        int arr3[6];

        //Find median of two sorted arrays

        //Merge two array

        int length1 = 3;
        int length2 = 3;

        int a = 0;
        int b = 0;
        int c = 0;


        while(a<length1 && b<length2){

                if(arr1[a]<=arr2[b]){
                        arr3[c] = arr1[a];
                        a++;
                        c++;
                }else{
                        arr3[c] = arr2[b];
                        b++;
                        c++;
                }
        }

        //Print final array

        for(int i=0; i<6;i++){
                cout<<arr3[i]<<endl;
        }

}
