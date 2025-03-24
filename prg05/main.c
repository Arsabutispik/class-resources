//Klavyeden girilen iki tam sayının toplamını bulan program
#include <stdio.h>

int main(void) {
    int num1, num2, sum;
    printf("Iki sayiyi aralarinda bosluk olacak sekilde giriniz: ");
    scanf("%d %d", &num1, &num2); //Klavyeden sayi1 ve sayi2 değikenine giriş yapılır
    sum = num1 + num2;
    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}