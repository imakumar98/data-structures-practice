#include <iostream>

using namespace std;

int main(){
	int j = 0 ;

	do{
		j++;
		if(j==2)
			continue;
		cout<<"I am here ";
	}while(j<2);

	cout<<j;
}