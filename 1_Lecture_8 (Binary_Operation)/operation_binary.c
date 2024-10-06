#include <stdio.h>

int main() {

  //Create a number
  int Num = 0xDDCCBBAA;


  printf("Num is                  %x\n", Num);

  //Set the second byte to zero
  Num = Num & 0xFFFF00FF;
  printf("Num after cleaning is   %x\n", Num);

  //Set the second byte to EE
  Num = Num | 0x0000EE00;
  printf("Num after coorecting is %x\n", Num);

  //Set all bytes of numebr to zero
  Num = Num ^ Num;
  printf("Num after nulling is    %8x\n", Num);

  return 0;
}
