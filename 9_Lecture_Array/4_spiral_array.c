#include <stdio.h>
#define N 3

int main() {

  int Matrix[N][N] = {0};
  int Num = 1;
  int index = 0;
  int length = 0;
  int hight = 0;

  //Filling the Matrix

  while(Num <= (N * N)) {
    //Filling the horizontal line forward
    for( ; length < (N - index) && Num <= (N * N); length++) {
      Matrix[hight][length] = Num++;
    }
    hight++;
    //Filling the vertical line down
    for( ; hight < (N - index) && Num <= (N * N); hight++) {
      Matrix[hight][length - 1] = Num++;
    }
    length--;
    //Filling the horizontal line backward
    for( ; length > index && Num <= (N * N); length--) {
      Matrix[hight - 1][length - 1] = Num++;
    }
    index++;
    hight--;
    //Filling the vertical line up
    for( ; hight > index && Num <= (N * N); hight--) {
      Matrix[hight - 1][length] = Num++;
    }
    length++;
  }

  //Printing the Matrix

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      printf("%2d ", Matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
