#include <stdio.h>

int main() {
    int size, index=0;
    int arr[100];
    int reverseArry[100];
    printf("Moi ban nhap so luong phan tu trong mang ");
    scanf("%d",&size);
    if (size < 0 || size > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("mang truoc khi dao nguoc la \n");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }
    for (int i = size-1; i >= 0; i--) {
        reverseArry[index] = arr[i];
        index++;
    }


    printf("mang sau khi dao nguoc la \n");
    for (int i = 0; i < size; i++) {
        printf("%d ",reverseArry[i]);
    }
    return 0;
}