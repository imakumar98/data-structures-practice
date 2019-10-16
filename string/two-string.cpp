#include <iostream>
#include <string>

using namespace std;


bool twoString(string, string);

int main(){

    bool result = twoString("hello","world");

    cout<<result;

}

bool twoString(string s1, string s2){
    int flag = 0;
    for(int i=0; i<s1.size(); i++){
        for(int j=0; j<s2.size(); j++){
            if(s1[i]==s2[j]){
                flag = 1;
                break;
            }

        }
    }
    if(flag==1){
        return true;
    }else{
        return false;
    }
}