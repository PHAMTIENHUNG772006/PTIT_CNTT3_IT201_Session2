#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    if (size < 0 || size > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    int *arr = (int*) malloc ( size * sizeof(int));
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int maxRight = arr[size-1];
    printf("%d",maxRight);
    for (int i = size-2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            printf("%d ", arr[i]);
        }
    }

    free(arr);
    return 0;
}
