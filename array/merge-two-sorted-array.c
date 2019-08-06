#include <stdio.h>


int main(){

  int a[4] = {10,20,30,40};
  int b[4] = {25, 35, 45, 55};

  int length_of_a = sizeof(a)/sizeof(a[0]);

  int length_of_b = sizeof(b)/sizeof(b[0]);

  int c[8];

  int i = 0, j = 0, k = 0;


  while(i < length_of_a && j<length_of_b){

    if(a[i]<b[j]){
      c[k] = a[i];
      i = i+1;

    }else{

      c[k] = b[j];
      j = j+ 1;

    }
    k = k+1;


  }

  while(i<length_of_a){
    c[k] = a[i];
    i = i+1;
    k = k+1;
  }

  while(j<length_of_b){
    c[k] = b[j];
    j = j+1;
    k = k+1;
  }





  //Print Array C:
  for(int l=0; l<8; l++){
    printf("\n %d", c[l]);
  }



}
