// Üs alma içeri gerçekleştiren bir recursive fonsikyon kullanarak 7^5 işleminin sonucunu hesaplayan işleminin sonucunu hesaplayınız
#include <stdio.h>
/*
 Recursive üs alma
 7^5 işleminin sonucunu hesaplayınız
 */
int us(int, int);
int main() {
    printf("7^5 = %d\n", us(7, 5));
    return 0;
}

int us(int taban, int ust) {
    if (ust == 0) {
        return 1;
    }
    return taban * us(taban, ust - 1);
}