#include <stdio.h>
/* 1 - n  tam sayıların çarpımını hesaplamak - while ile */
int main(void) {
    int i = 1, carpim = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        carpim *= i; // carpim = carpim * i
        i++;
    }
    printf("%d! = %d", n, carpim);
    return 0;
}