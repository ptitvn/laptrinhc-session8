#include<stdio.h>
int main(){
    int array[] = {10, 20, 30, 60, 90};
    int n = sizeof(array) / sizeof(array[0]);
    int i;
    printf("Mang ban dau la\n");
    for(i = 0; i < n; i++){
        printf("%d\n",array[i]);
    }
    printf("Mang in nguoc\n");
    for(i = n - 1; i >= 0; i--){
        printf("%d\n",array[i]);
    }

    return 0;

}