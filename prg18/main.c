#include <stdio.h>
/* 1 - n  tam sayıların çarpımını hesaplamak - do while ile */
int main(void) {
    int i = 1, carpim = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        carpim *= i; // carpim = carpim * i
        i++;
    }
    while (i <= n);
    printf("%d! = %d", n, carpim);
    return 0;
}