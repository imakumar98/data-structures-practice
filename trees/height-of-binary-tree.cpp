#include <iostream>

using namespace std;

int heightOfTree(root){
	
	int leftHeight = heightOfTree(root->left);
	int rightHeight = heightOfTree(root->right);

	int height = max(leftHeight, rightHeight) + 1;

	return height;

}



int main(){


}