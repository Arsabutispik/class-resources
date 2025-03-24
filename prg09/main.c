/*ax^2 + bx + c şeklindeki ikinci dereceden bir bilinmeyenli bir denklemin
 * a b c katsayıları klavyeden girildiğinde diskrimantı hesaplayan
 * diskrimant 0'dan büyük ise "birbirinden farklı iki gerçek kök vardır"
 * 0'a eşit ise "eşit iki gerçek kök vardır"
 * 0'dan küçük ise "gerçek kök yoktur"
 * mesajını ekrana yazdıran programı yazınız
*/
#include <math.h>
#include <stdio.h>

int main(void) {
    int a, b, c, diskrimant;
    float root1, root2;
    printf("ax^2 + bx + c icin verilen ifadeleri girin\n");
    printf("a icin deger verin:");
    scanf("%d", &a);
    printf("b icin deger verin:");
    scanf("%d", &b);
    printf("c icin deger verin:");
    scanf("%d", &c);
    diskrimant = pow(b, 2) - 4 * a * c;
    if (diskrimant > 0) {
        printf("iki gercek kok vardir\n");
        root1 = (float)(-b - sqrt(diskrimant)) / (float)(2 * a);
        root2 = (float)(-b + sqrt(diskrimant)) / (float)(2 * a);
        printf("root1 = %f\n", root1);
        printf("root2 = %f\n", root2);
    } else if (diskrimant < 0) {
        printf("gercek kok yoktur\n");
    } else {
        printf("esit iki gercek kok varir\n");
        root1 = (float)-b / (float)(2 * a);
        printf("root1 = %f\n", root1);
    }
    printf("diskrimant = %d\n", diskrimant);
    return 0;
}