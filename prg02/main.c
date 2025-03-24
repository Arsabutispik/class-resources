#include <stdio.h>

int main(void) {
    int a, b, c;
    float d;
    a = 5;
    b = 2;
    c = a % b;
    d = (float)a / b;
    // printf("c = %d\n", c);
    printf("%d %% %d = %d\n", a, b, c);
    printf("d = %f\n", d); // Float tipi değer için %f yazıldı
    // a++; veya a = a +1;
    // b--; veya b = b - 1;
    c = --a * b++;
    // d = a * b / c + 2; işlem önceliği * / + = şeklinde devreye girer
    printf("a degiskenin yeni degeri = %d\n", a);
    printf("b degiskenin yeni degeri = %d\n", b);
    printf("c degiskenin yeni degeri = %d\n", c);
    return 0;
}