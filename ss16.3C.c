#include <stdio.h>

void tinhTong(int *a, int *b, int *result){
    *result = *a + *b;
}

int main(){
    int x = 5, y = 10, ketQua;
    tinhTong(&x, &y, &ketQua);
    printf("Tong hai so la: %d", ketQua);
    return 0;
}
