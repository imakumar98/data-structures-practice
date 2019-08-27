#include <iostream>
#include <string>

using namespace std;


int main(){

	string time = "07:05:45PM";

	string timeInHour = time.substr(0,8);

	string zone = time.substr(8,10);

	string hour = timeInHour;

	int hr24 = 0;


	if(zone=="PM"){
		hr24 = (int)hour + 12;
	}

	cout<<zone;
}