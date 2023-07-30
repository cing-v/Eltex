#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

  if(argc < 2) {
    printf("Number doesn't found\n");
  } else {
    int Binary_Num = 0;
    int Multi = 1;

    //Converting a number to binary
    for(int index = 0; index < 8; index++) {
      Binary_Num = Binary_Num + (((atoi(argv[1])>>index) & 1) * Multi);
      Multi = Multi * 10;
    }

    //Printing result's
    printf("Number is        %d\n", atoi(argv[1]));
    printf("Binary Number is %08d\n", Binary_Num);
  }

  return 0;
}
