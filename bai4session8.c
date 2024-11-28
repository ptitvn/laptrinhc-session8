#include <stdio.h>

int main() {
    int arr[2][2] = {{1, 2, 3}, {4, 5, 6}}; 
    int rows = 2, cols = 2;
    int max = arr[0][0]; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}