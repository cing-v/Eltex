#include <stdio.h>

#define N 4                 // size of Matrix

int main() {

    int array[N][N] = {0};
    int num = 1;            // first number

    // Filling the Matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            array[i][j] = num++;
        }
    }

    // Simple printing the Matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%2d ", array[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    // Back-Forward printing the Matrix
    for(int i = 0; i < N; i++) {
        // if the line is even (чётная)
        if(i % 2) {
            for(int j = N - 1; j >= 0; j--) {
                printf("%2d ", array[i][j]);
            }
        // if the line is odd (нечётная)
        } else {
            for(int j = 0; j < N; j++) {
                printf("%2d ", array[i][j]);
            }
        }

        printf("\n");
    }

    return 0;
}