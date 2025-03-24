#include <stdio.h>
int main(void) {
    int n, tekToplam = 0, ciftToplam = 0;
    printf("Enter n value:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            tekToplam = tekToplam + i;
        } else {
            ciftToplam = ciftToplam + i;
        }
    }
    printf("Sum of even numbers in 1 - %d = %d\n", n, ciftToplam);
    printf("Sum of odd numbers in 1 - %d = %d", n, tekToplam);
    return 0;
}