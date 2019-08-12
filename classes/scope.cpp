#include <iostream>
#include <string>


using namespace std;

class Student{

public:
	string name = "Ashwani";

	void hello(){
		cout<<"Hello"<<name;
	}
};

int main(){

	Student s1;

	s1.hello();
}