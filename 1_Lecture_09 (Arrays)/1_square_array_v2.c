#include <stdio.h>
#define N 3   //Size of matrix

/*
 * Заплняем и распечатываем массив одновременно
 */

int main() {

  int Matrix[N][N];
  int num = 1;

//Printing the Matrix
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(j == N - 1) {
        printf("%2d", Matrix[i][j] = num++);
      } else {
        printf("%2d ", Matrix[i][j] = num++);
      }
    }
    printf("\n");
  }

  return 0;
}
