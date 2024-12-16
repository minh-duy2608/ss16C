#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Cach 1\n");
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", &x);
    printf("Gia tri cua ptr (dia chi cua x): %p\n", ptr);
    printf("Gia tri ma ptr tro den: %d\n", *ptr);

    printf("\nCach 2\n");
    printf("Gia tri cua x qua con tro: %d\n", *ptr);
    printf("Dia chi cua x qua con tro: %p\n", ptr);

    return 0;
}
