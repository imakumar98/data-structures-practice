#include <iostream>

using namespace std;




class Account{
public:
	int balance; //Instance member variable
	static float roi; //Static member varaible / Class variable


public: 
	void set_balance(int b){
		balance = b;
	}
};

float Account:: roi = 40.6f;

int main(){

	cout<<Account::roi;

	return 0;
}