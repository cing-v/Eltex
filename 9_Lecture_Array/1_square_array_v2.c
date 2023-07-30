#include <stdio.h>
#define N 3   //Size of matrix

int main() {

  int Matrix[N][N];
  int Num = 1;

//Printing the Matrix

  for(int index = 0; index < N; index++) {
    for(int index_2 = 0; index_2 < N; index_2++) {
      if(index_2 == N - 1) {
        printf("%2d", Matrix[index][index_2] = Num++);
      } else {
        printf("%2d ", Matrix[index][index_2] = Num++);
      }
    }
    printf("\n");
  }

  return 0;
}
