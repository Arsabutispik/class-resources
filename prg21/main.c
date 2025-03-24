#include <stdio.h>

int main(void) {
    int number;
    double factorial = 1;
    do {
        printf("Please enter a number:");
        scanf("%d", &number);
        if (number < 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (number < 0);
    if (!(number == 0 || number == 1)) {
        for (int i = 2; i <= number; i++) {
        factorial *= i;
        }
    }
    printf("%d! = %0.1f\n", number, factorial);
    return 0;
}