#include <stdio.h>
#include <stdlib.h>
    int main() {
        int temp;
        int maxCount = 0;
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
        for (int i = 0; i < size; i++) {
            int count = 0;
            for (int j = 0; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if(count > maxCount) {
                maxCount = count;
                temp = arr[i];
                printf(" phan tu xuat hien nhieu nhat la : %d", temp);
            }
        }
        return 0;
    }
