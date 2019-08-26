#include <iostream>
#include <iomanip>


using namespace std;

int main(){

	int arr[5] = {1,1,0,-1,-1};

	float negative = 0;
	float positive = 0;
	float zero = 0;

	for(int i=0; i<5;i++){
		if(arr[i]>0){
			positive = positive + 1;
		}else if(arr[i]<0){
			negative = negative + 1;
		}else{
			zero = zero + 1;
		}
	}

	cout<<fixed<<setprecision(6)<<negative/5<<endl;
	cout<<fixed<<setprecision(6)<<positive/5<<endl;
	cout<<fixed<<setprecision(6)<<zero/5<<endl;

}