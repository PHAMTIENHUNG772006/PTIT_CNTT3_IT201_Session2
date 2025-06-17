#include <stdio.h>
#include <stdlib.h>
int main() {
    int checkNumber,size,count=0;
    printf("Moi nhap so luong phan tu trong mang");
    scanf("%d", &size);
    if (size < 0 || size > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    int *arr = (int*) malloc ( size + 1 * sizeof(int));
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Moi nhap gia tri can kiem tra");
    scanf("%d", &checkNumber);
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] + arr[j] == checkNumber) {
                printf("%d%d", arr[i],arr[j]);
                count=1;
            }
        }
    }
    if (count == 0) {
        printf("Khong tim thay");
    }
    free(arr);
}
