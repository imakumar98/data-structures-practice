#include <iostream>


using namespace std;

int main(){

    char *s = "welcome";

    int i= 0;
    while(s[i]!='\0'){
        i = i+1;
    }
    cout<<"Length of string: "<<i; 
    return 0;
}