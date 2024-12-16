#include <stdio.h>
#include <string.h>
int main(){
    char inputString[100], reverseString[100];
    char *pInput = inputString, *pReverse = reverseString;

    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);  

    inputString[strcspn(inputString, "\n")] = 0;

    int len = strlen(inputString);
    for (int i = 0; i < len; i++) {
        *(pReverse + i) = *(pInput + len - i - 1); 
    }
    *(pReverse + len) = '\0'; 
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}
