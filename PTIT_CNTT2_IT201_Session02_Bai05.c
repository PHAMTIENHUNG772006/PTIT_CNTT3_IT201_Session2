#include <stdio.h>
int main() {
    int arr[100];
    int index,size;
    printf("Moi nhap so long phan tu trong mang");
    scanf("%d",&size);
    if (size < 0 || size > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("mang truoc khi xoa la : ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }

    printf("Moi nhap vi tri can xoa :");
    scanf("%d",&index);
    if (index > size) {
        printf("khong co vi tri trong mang");
    }

    for (int i = index; i < size; i++) {
        arr[i] = arr[i + 1];
    }
    printf("mang sau khi xoa la : ");
    for (int i = 0; i < size-1; i++) {
        printf("%d ",arr[i]);
    }

}