#include <iostream>


using namespace std;

class Student{

public:
	string name;
	int marks;
	string email;

public:

	void setName(string name){
		name = name;
	}


	void getName(){
		cout<<name;
	}
};


int main(){

	Student s1;

	s1.setName("Ashwani");

	s1.getName();

		

	return 0;
}