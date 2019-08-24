#include <iostream>


using namespace std;

int main(){

	int number = 121;

	//Output = 1221


 	int reverseNumber = 0;
 	int temp = 0;
	while(number>0){
		temp = number%10;
		reverseNumber = reverseNumber*10 + temp;
		number = number/10;
		

	}

	cout<<"Reverse of number : "<<reverseNumber;
}