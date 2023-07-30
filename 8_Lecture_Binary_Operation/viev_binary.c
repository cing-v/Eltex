#include <stdio.h>

int main() {

  int Num = 64;
  int Binary_Num = 0;
  int Multi = 1;


  //Converting a number to binary viev
  for(int index = 0; index < 8; index++) {
    Binary_Num = Binary_Num + (((Num>>index) & 1) * Multi);
    Multi = Multi * 10;
  }

  printf("Num is        %d\n", Num);
  printf("Binary Num is %08d\n", Binary_Num);

  return 0;
}
