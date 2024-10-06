#include <stdio.h>
#define N 6

int main() {

  int Array[N];

//Fiiling the array

  for(int index = 0; index < N; index++) {
    scanf("%d", &Array[index]);
  }

//Replace the array element's

  int buffer;

  for(int index = 0; index < N/2; index++) {
    buffer = Array[index];
    Array[index] = Array[N - 1 - index];
    Array[N - 1 - index] = buffer;
  }

//Printing the array

  for(int index = 0; index < N; index++) {
    printf("%d ", Array[index]);
  }
  printf("\n"); 

  return 0;
}
