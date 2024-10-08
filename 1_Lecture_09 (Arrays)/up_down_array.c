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

    // Simple horizontal printing the Matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%2d ", array[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    // Simple vertical printing the Matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%2d ", array[j][i]);
        }

        printf("\n");
    }

    printf("\n");

    // Upside-down printing the Matrix
    for(int i = 0, n = N - 1; i < N; i++, n--) {
        for(int j = 0; j < N; j++) {
            // if the column is odd (нечётный столбец)
            if(j % 2) {
                printf("%2d ", array[j][n]);
            // if the colunm is even (чётный столбец)
            } else {
                printf("%2d ", array[j][i]);
            }
            
        }

        printf("\n");
    }

    return 0;
}