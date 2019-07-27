#include <iostream>
#include <string>

using namespace std;

class Student{
public:
	string name = "Ashwani";
	int age = 10;

	void getAge(){
		cout<<age;
	}

	void getName(){
		cout<<name;
	}
};


int main(){
	Student s1;
	
	s1.getName();
}