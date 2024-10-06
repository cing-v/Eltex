#include <stdio.h>
#define N 3               //Size of matrix

int main() {

  int Matrix[N][N];
  int Num = 1;

//Filling the Matrix

  for(int index = 0; index < N; index++) {
    for(int index_2 = 0; index_2 < N; index_2++) {
      Matrix[index][index_2] = Num++;
    }
  }

//Printing the Matrix

  for(int index = 0; index < N; index++) {
    for(int index_2 = 0; index_2 < N; index_2++) {
      printf("%d ", Matrix[index][index_2]);
    }
    printf("\n");
  }

  return 0;
}
