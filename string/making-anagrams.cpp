#include <iostream>

using namespace std;


int deletions(string, string);

int main(){

    int res = deletions("hello","world");
    cout<<endl<<"Minimum number of deletions: "<<res;
}


int deletions(string s1, string s2){

    int a[26];
    int b[26];


    int res = 0;

    for(int i=0; i<26; i++){
        a[i] = 0;
        b[i] = 0;
    }

    for(int i=0; i<s1.size(); i++){
        int char_to_int = (int)s1[i];
        int charIndex = char_to_int - (int)'a';
        a[charIndex]++;
    }

    for(int i=0; i<s2.size(); i++){
        int char_to_int = (int)s2[i];
        int charIndex = char_to_int - (int)'a';
        b[charIndex]++;
    }

   

    //Minimum deletions
    for(int i=0; i<26; i++){
        int difference = abs(a[i] - b[i]);
        
        res = res + difference;

    }
    return res;
    
}