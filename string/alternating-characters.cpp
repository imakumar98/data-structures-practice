#include <iostream>

using namespace std;

int deletions(string);

int main(){

    string s = "AAABBB";

    int res = deletions(s);

    cout<<"Number of deletions : "<<res;
}


int deletions(string s){
    int result = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1]){
            result = result + 1;
        }
    }
    return result;
}