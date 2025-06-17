#include <stdio.h>
int main() {
    int arr[100];
    int index, value,n;
    printf("Moi nhap so luong phan tu trong mang");
    scanf("%d",&n);
    if (n < 0 || n > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("mang sau khi nhap la :");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Moi nhap vi tri");
    scanf("%d",&index);
    printf("\n");
    printf("Moi nhap gia tri thay doi");
    scanf("%d",&value);
    printf("\n");
    arr[index] = value;
    printf("mang sau khi cap nhat gia tri la : ");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
}