#include <stdio.h>

int main() {
    int n;

    printf("Nhap kich thuoc ma tran vuong (n x n)\n ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}