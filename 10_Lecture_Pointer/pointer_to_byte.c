#include <stdio.h>

void print(char* Pointer) {
  //0010 0010 - 34
  printf("First  byte of Num is %d\n", *Pointer);
  //0000 0010 -  2
  printf("Second byte of Num is %d\n", *(++Pointer));
  //0010 0000 - 32
  printf("Third  byte of Num is %d\n", *(++Pointer));
  //0001 0000 - 16
  printf("Fourth byte of Num is %d\n", *(++Pointer));
}


int main() {

  int Num = 270533154;
  /* 
   * 0001 0000  0010 0000  0000 0010  0010 0010 - Binary Num
   * 0010 0010  0000 0010  0010 0000  0001 0000 - little-endian
   *        34          2         32         16 - Decimal Num by byte
   */
  char* Ptr = (char*) &Num;

  printf("Before changing\n");
  print(Ptr);

  //change third byte of Num
  *(Ptr + 2) = 40;

  printf("After changing\n");
  print(Ptr);

  return 0;
}
