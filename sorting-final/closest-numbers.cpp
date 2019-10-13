#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int arr[10] = {-7330761, -6461594, -3916237, -3620601, -357920, -20, 30, 266854, 6246457, 7374819};

    int smallest_difference = arr[1] - arr[0];

    for(int i=0; i<10-1; i++){
        int difference = arr[i+1]-arr[i];
        if(difference<smallest_difference){
            smallest_difference = difference;
        }
    }


    cout<<"Smallest difference: "<<smallest_difference<<endl;


    // for(int i=0; i<4-1; i++){
    //     int difference = arr[i+1]-arr[i];
    //     if(difference==1){
    //         cout<<arr[i]<<" "<<arr[i+1]<<" ";
    //     }
    // }



    //FIND THE PAIRS



    // cout<<"SMALLEST DIFFERECNE: "<<smallest_difference;


    


    


}

