#include <stdio.h>
void phanTu(int *arr, int phanTuMoi, int viTri){
    *(arr + viTri) = phanTuMoi;
}
int main() {
    int arr[] = {1,2,3,4,5};
    int viTri = 2; 
    int phanTuMoi = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    phanTu(arr, phanTuMoi, viTri);
    printf("Mang sau khi cap nhat: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
