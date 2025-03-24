#include <stdio.h>

int main(void) {
    char cevap, secim;
    dongu:
    {
        printf("=====ANA MENU=====\n");
        printf("1- Kayit Ekleme\n");
        printf("2- Kayit Silme\n");
        printf("3- Kayit Duzenleme\n");
        printf("4- Cikis\n");
        printf("Seciminizi giriniz: ");

        scanf(" %c", &secim); // Başa boşluk koyarak önceki newline'i temizleriz

        switch (secim) {
            case '1': printf("Kayit Ekleme uygulamasini sectiniz\n");
            break;
            case '2': printf("Kayit Silme uygulamasini sectiniz\n");
            break;
            case '3': printf("Kayit Duzenleme uygulamasini sectiniz\n");
            break;
            case '4': break;
            default: printf("Yanlis islem secimi girdiniz...\n");
            break;
        }

        if (secim == '4') goto cikis;

        printf("Devam etmek istiyor musunuz? [E/H]: ");
        scanf(" %c", &cevap); // Başa boşluk koyarak önceki newline'i temizleriz
    }
    if (cevap == 'e' || cevap == 'E') {
        goto dongu;
    }
    cikis:
    return 0;
}
