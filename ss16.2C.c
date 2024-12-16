#include<stdio.h>
int main(){
    int x = 5, y = 10;
    int temp;
    printf("Truoc khi hoan doi x = %d y = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("Sau khi hoan doi x = %d y = %d\n", x, y);
    return 0;
}
