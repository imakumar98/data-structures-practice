#include <iostream>
#include <string>
#include <stack>




using namespace std;


int main(){
	string S,w;
	long long int q;
	int operation, k;
	stack<string> myStack;

	//Input number of operations
	cin>>q;

	//Loop for each operation
	for(int i=0; i<q;i++){

		//Input type of opertation
		cin>>operation;

		if(operation==1){

			//Insert to String
			cin>>w;

			//Save string to stack first
			myStack.push(S);

			//Now apppend string
			S.append(w);

		}else if(operation==2){

			//Input number of characters to delete
			cin>>k;

			//Save string to stack first
			myStack.push(S);

			//Now delete characters
			for(int i=0; i<k;i++){
				S.pop_back();
			}

		}else if(operation==3){

			//Input character index to print
			cin>>k;

			//Print character
			cout<<S[k-1]<<endl;

		}else if(operation==4){

			//Get last saved string
			S = myStack.top();
			myStack.pop();
		}
	}

}




