#include <stdio.h>
int main() {
int number,count=0;
    int arr[100];

    int size;
    printf("Nhap so can dem");
    scanf("%d",&number);
    printf("Nhap so phan tu trong mang");
    scanf("%d",&size);
    if (size < 0 || size > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
        if(arr[i]==number) {
            count++;
        }
    }

    printf("phan tu %d  xuat hien %d lan trong mang",  number,count);

return 0;
}