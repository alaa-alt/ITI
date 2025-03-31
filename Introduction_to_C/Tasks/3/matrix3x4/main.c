#include <stdio.h>

int main() {
    int array[3][4];
    int rowSum[3] = {0, 0, 0};
    float colAvg[4] = {0};

    printf("Enter values for the 3x4 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            rowSum[i] += array[i][j];
            colAvg[j] += array[i][j];
        }
    }


    for (int i = 0; i < 3; i++) {
        printf("Sum of row %d = %d\n", i + 1, rowSum[i]);
    }


    for (int j = 0; j < 4; j++) {
        colAvg[j] /= 3;
        printf("Average of column %d = %.2f\n", j + 1, colAvg[j]);
    }

    return 0;
}
