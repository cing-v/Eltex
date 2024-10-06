#include <stdio.h>
#define BIT struct bit

BIT {
  unsigned char b1:1;
  unsigned char b2:1;
  unsigned char b3:1;
  unsigned char b4:1;
  unsigned char b5:1;
  unsigned char b6:1;
  unsigned char b7:1;
  unsigned char b8:1;
};

int main() {

  printf("Size of structure is %ld\n", sizeof(BIT));

  char Num = 0b11011001;
  BIT* Ptr;

  Ptr = (BIT*) &Num;

  /*
  for(int index = 0; index < 8; index++) {
    printf("%d", (Ptr + index).b1);
  }
  printf("\n");
  */

    printf("%d", (*(Ptr)).b8); 
    printf("%d", (*(Ptr)).b7);
    printf("%d", (*(Ptr)).b6);
    printf("%d", (*(Ptr)).b5);
    printf("%d", (*(Ptr)).b4);
    printf("%d", (*(Ptr)).b3);
    printf("%d", (*(Ptr)).b2);
    printf("%d", (*(Ptr)).b1);
    printf("\n");

  return 0;
}
