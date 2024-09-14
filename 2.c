
#include <stdio.h>

float Average(int arr[][10], int rows, int cols) {
    int sum = 0;
    int te = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    return (float)sum / te;
}

int main() {
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[10][10]; 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    float average = Average(arr, r, c);

    printf("\nThe average of the elements in the 2D array is: %.2f\n", average);

    return 0;
}