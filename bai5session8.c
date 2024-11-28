#include <stdio.h>

int main() {
    int arr[2][2] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 2;
    int sum = 0;

   
    for (int i = 0; i < rows; i++) {
        sum += arr[i][0]; 
        sum += arr[i][cols - 1]; 
    }
    for (int j = 1; j < cols - 1; j++) {
        sum += arr[0][j]; 
        sum += arr[rows - 1][j]; 
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}