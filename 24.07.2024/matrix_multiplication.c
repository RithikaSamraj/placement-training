#include <stdio.h>

#define MAX 10

void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    int i, j, k;
    for (i = 0; i < rowFirst; i++) {
        for (j = 0; j < columnSecond; j++) {
            result[i][j] = 0;
            for (k = 0; k < columnFirst; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

int main() {
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX], rowFirst, columnFirst, rowSecond, columnSecond;
    int i, j;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    if (columnFirst != rowSecond) {
        printf("Column of first matrix should be equal to row of second matrix.\n");
        return 0;
    }

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rowFirst; i++) {
        for (j = 0; j < columnFirst; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < rowSecond; i++) {
        for (j = 0; j < columnSecond; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    multiplyMatrices(first, second, result, rowFirst, columnFirst, rowSecond, columnSecond);

    printf("Resultant matrix:\n");
    for (i = 0; i < rowFirst; i++) {
        for (j = 0; j < columnSecond; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
