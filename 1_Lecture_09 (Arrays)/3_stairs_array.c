#include <stdio.h>
#define N 3

int main() {

  int array[N][N];

  //Filling the array
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      //If summ of index less than diagonal of matrix put null
      array[i][j] = ((i + j) < (N - 1)) ? 0 : 1;
    }
  }

  //Printing the array
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

  return 0;
}
