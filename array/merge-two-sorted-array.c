#include <stdio.h>


int main(){

  int a[4] = {10,20,30,40};
  int b[4] = {25, 35, 45, 55};

  int length_of_a = 4;

  int length_of_b = 4;

  int c[8];

  int i = 0, j = 0, k = 0;


  while(i<length_of_a && j < length_of_b){

    if(a[i]< b[j]){
      c[k] = a[i];
      i++;
      k++
    }else{
      c[k] = b[i];
      j++;
      k++;
    }
  }





  //Print Array C:
  for(int l=0; l<8; l++){
    printf("\n %d", c[l]);
  }



}
