#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_paranthesis_balanced(string);
bool is_paired(char, char);

int main(){


	string expression = "{{[[(())]]}}";


	if(is_paranthesis_balanced(expression)){
		cout<<"Yes parenthesis is balanced!!";
	}else{
		cout<<"No its not balanced";
	}


	
	

}


bool is_paranthesis_balanced(string expression){

	stack<char> S;


	int length = expression.size();


	for(int i=0; i<length;i++){

		if(expression[i]=='(' || expression[i]=='{' || expression[i]=='['){
			S.push(expression[i]);
		}else if(expression[i]==')' || expression[i]=='}' || expression[i]==']'){
			
			
			if(S.empty() || !is_paired(S.top(), expression[i])){
				return false;
			
				// cout<<S.top()<<" "<<expression[i];
				// return false;
			}else{
				S.pop();
			}
		}
	}
	cout<<S.top();
	return S.empty() ? true : false;
}


bool is_paired(char a, char b){
	if(a=='(' && b==')'){
		return true;
	}else if(a=='{' && b=='}'){
		return true;
	}else if(a=='[' && b==']'){
		return true;
	}else{
		return false;
	}
}