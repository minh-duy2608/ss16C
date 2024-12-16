#include <stdio.h>

int timKiemPhanTu(int *arr, int giaTriCanTim, int n) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == giaTriCanTim) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int arr[] = {1,2,3,4,5};
    int giaTriCanTim = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int viTri = timKiemPhanTu(arr, giaTriCanTim, n);

    if (viTri != -1) {
        printf("Phan tu %d tim thay tai vi tri: %d\n", giaTriCanTim, viTri);
    } else {
        printf("Phan tu %d khong tim thay trong mang\n", giaTriCanTim);
    }

    return 0;
}
