//A ve B 5'er elemanlı iki tam sayı dizisidir bu iki dizinin elemanlarını birebir toplayıp bir C dizisine aktaran ve
//oluşan yeni dizinin elemanlarını alt alta yazan C programı
#include <stdio.h>

#define SIZE 5
int main(void) {
    int A[SIZE]; // Örnek dizi A
    int B[SIZE]; // Örnek dizi B
    int C[SIZE]; // Sonuç dizisi C

    for (int i = 0; i < SIZE; i++) {
        printf("A dizisinin %d indisli elemanini giriniz:", i);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < SIZE; i++) {
        printf("B dizisinin %d indisli elemanini giriniz:", i);
        scanf("%d", &B[i]);
    }
    // Dizileri toplama işlemi
    for (int i = 0; i < SIZE; i++) {
        C[i] = A[i] + B[i];
    }
    // Sonuçları ekrana yazdırma
    printf("C dizisinin elemanlari:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", C[i]);
    }
    return 0;
}