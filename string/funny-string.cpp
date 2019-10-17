#include <iostream>

using namespace std;

string isFunny(string);


int main(){

    string s = "bcxz";

    string res = isFunny(s);

    cout<<"Result: "<<res;
}


string isFunny(string s1){

    int length = s1.size();

    int a[length];

    int b[length];

    for(int i=0; i<length; i++){
        a[i] = (int)s1[i];
        b[i] = (int)s1[length-i-1];
        
    }

    int flag=0;
    for(int i=0; i<length; i++){
        if(abs(a[i]-a[i+1])==abs(b[i]-b[i+1])){
            flag++;
        }
    }

    if(flag==length-1){
        return "Funny";
    }else{
        cout<<flag;
        return "Not Funny";
    }

  

}