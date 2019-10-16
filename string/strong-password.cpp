#include <iostream>
#include <string>

using namespace std;


int minimumNumber(int, string);

int main(){

    int t = minimumNumber(3,"Ab1");

    cout<<"Number to add : "<<t;



}


int minimumNumber(int n, string password){

    string specials = "!@#$%^&*()-+";

    

    bool smallLetter = false;
    bool capitalLetter = false;
    bool number = false;
    bool special = false; 

    for(int i=0; i<n; i++){
        if(password[i]>='a' && password[i]<='z'){
            smallLetter = true;
            
        }
        if(password[i]>='A' && password[i]<='Z'){
            capitalLetter = true;
            

        }
        if(password[i]>='0' && password[i]<='9'){
            number = true;
            
        }
        if(specials.find(password[i])!=string::npos){
            special = true;
            
        }
    }

    int flag = 0;

    if(!smallLetter) flag++;
    if(!capitalLetter) flag++;
    if(!number) flag++;
    if(!special) flag++;

    if(n + flag < 6) flag+= 6-(n+flag);
    return flag;

    if(n<6){
        return 6-flag;
    }


}
