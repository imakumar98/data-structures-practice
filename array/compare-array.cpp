#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

	//0,2
	//1,1
	//2,0


int main(){
	vector<vector<int>> arr{{1,2,3},
							{1,3,6},
							{6,9,4}};
	 int ltr = 0;
    int rtl = 0;

    int inc = 0;

    int dec = arr[0].size() - 1;

    int loop_length = arr[0].size();

    while(loop_length!=0){
    	
    	ltr = ltr + arr[inc][inc];
    	rtl = rtl + arr[inc][dec];
    	inc++;
    	dec--;
    	loop_length--;
    }

    cout<<ltr<<endl;

   cout<<rtl<<endl;

   cout<<abs(ltr - rtl);
}