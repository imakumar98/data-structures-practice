#include <iostream>

using namespace std;

int main(){

	int a[3] = {9,5,8};
	int b[3] = {3,7,2};
	int length_of_a = sizeof(a)/sizeof(a[0]);
	int length_of_b = sizeof(b)/sizeof(b[0]);
	int c[3];

	int carry = 0;

	int sum = 0;

	for(int i=2; i>=0;i--){
		
		if(i==0){
			c[i] = a[i] + b[i] + carry;
		}else{
			sum = a[i] + b[i] + carry;

			c[i] = sum%10;

			carry = sum/10;
		}


	}

	//Print value of C Array
	for(int j=0; j<3; j++){
		cout<<c[j]<<",";
	}
}