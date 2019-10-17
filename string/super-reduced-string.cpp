#include <iostream>

using namespace std;

string superReducedString(string);

int main(){

    string s = "baab";

    string res = superReducedString(s);

    cout<<res;


}

string superReducedString(string s){

    // int i = 0;
    
    //     s.erase(i,i+2);
    //    return s;

    for(int i=0; i<s.size(); i++){

        if(s[i]==s[i-1]){
            cout<<"Before erase : "<<s<<endl;
          
            s.erase(i-1,2);
            i=0;
            cout<<"After erase : "<<s<<endl;
            cout<<s<<endl;
            // break;
        }else{
            continue;
        }
    }

    if(s.size()==0){
        return "Empty String";
    }else{
        return s;
    }

    

}