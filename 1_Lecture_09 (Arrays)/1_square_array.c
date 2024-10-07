#include <stdio.h>
#define N 3               //Size of array

int main() {

  int array[N][N];
  int num = 1;

//Filling the array
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      array[i][j] = num++;
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
