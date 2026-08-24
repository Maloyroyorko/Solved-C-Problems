#include <stdio.h>

#define ROWS 3
#define COLS 3

void main() {
    int array[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[COLS][ROWS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transpose[j][i] = array[i][j];
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
