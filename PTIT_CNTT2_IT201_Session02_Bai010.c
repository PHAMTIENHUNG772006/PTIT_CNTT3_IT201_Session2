
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
        int visited[100] = {0};

        for (int i = 0; i < size; i++) {
            if (visited[i] == 1) continue;

            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1;
                }
            }

            printf("Phan tu %d xuat hien %d lan\n", arr[i], count);
        }
        free(arr);
        return 0;
    }

