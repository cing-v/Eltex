#include <stdio.h>
#define N 3

int main() {

  int Array[N][N];

//Filling the array

  for(int index = 0; index < N; index++) {
    for(int index_2 = 0; index_2 < N; index_2++) {

//If summ of index less than diagonal of matrix put null

      Array[index][index_2] = ((index + index_2) < (N - 1)) ? 0 : 1;
    }
  }

//Printing the array

  for(int index = 0; index < N; index++) {
    for(int index_2 = 0; index_2 < N; index_2++) {
      printf("%d ", Array[index][index_2]);
    }
    printf("\n");
  }


  return 0;
}
