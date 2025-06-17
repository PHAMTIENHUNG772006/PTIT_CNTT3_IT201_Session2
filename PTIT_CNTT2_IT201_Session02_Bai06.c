#include <stdio.h>
#include <stdlib.h>

int main() {
    int size,index,value;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d",&size);
    if (size < 0 || size > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    int *arr = (int*) malloc ( size + 1 * sizeof(int));
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("moi nhap vi tri can them : ");
    scanf("%d",&index);
    if (index>size) {
        printf("vi tri can them khong hop le");
        return ;
    }
    printf("moi nhap gia tri can them : ");
    scanf("%d",&value);
    for (int i = size; i > index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    printf("mang sau khi them la :");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ",arr[i]);
    }
    return 0;

}
