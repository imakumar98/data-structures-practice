#include <iostream>

using namespace std;

void fibonacci(int);

int main(){

	fibonacci(20);

}


void fibonacci(int number){

	int first = 0;
	int second = 1;

	int next;

	

	while(number>0){
		cout<<first<<" ";
		next = first + second;
		first = second;
		second = next;

		number--;
	}
}