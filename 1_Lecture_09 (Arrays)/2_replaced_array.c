#include <stdio.h>
#define N 6

int main() {

  int array[N];
  int buffer = 0;

//Fiiling the array
  for(int i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }

//Replace the arrays' element's
  for(int i = 0; i < (N / 2); i++) {
    buffer = array[i];
    array[i] = array[N - 1 - i];
    array[N - 1 - i] = buffer;
  }

//Printing the array
  for(int i = 0; i < N; i++) {
    printf("%d ", array[i]);
  }
  printf("\n"); 

  return 0;
}
