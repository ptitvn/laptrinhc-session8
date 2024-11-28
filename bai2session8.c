#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 11, 27}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x, found = 0;

    printf("Nhap phan tu can tim:\n ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            printf("Vi tri cua phan tu %d trong mang la: %d\n", x, i);
            break; 
        }
    }

    if (found == 0) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}