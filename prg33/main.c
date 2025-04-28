#include <stdio.h>
#include <time.h>
void saniyeyiAl(unsigned int *saniye);
int main() {
    unsigned int san;
    saniyeyiAl(&san);
    /* gercek degeri yazdir */
    printf("Saniyelerin sayisi: %d\n", san);
    return 0;
}
void saniyeyiAl(unsigned int *ptr) {
    /* geçerli saniye sayısını al */
    *ptr = time(NULL);
}