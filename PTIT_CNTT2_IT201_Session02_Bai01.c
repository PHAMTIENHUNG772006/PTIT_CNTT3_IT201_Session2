#include <stdio.h>
int main() {
    int n, maxNumber=0;
    int arr[100];
    if (n < 0 || n > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    printf("Nhap so luong phan tu :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i < n + 1; i++) {
       if (arr[i] > maxNumber) {
           maxNumber = arr[i];
       }
    }
    printf("So lon nhat trong mang %d", maxNumber);
    return 0;
}