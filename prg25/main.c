#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[8] = "Merhaba";
    char str2[6] = "Dunya";
    char str3[13];
    int uz;
    strcpy(str3, str1);
    printf("strcpy(str3, str1): %s\n", str3);
    strcat(str1, str2);
    printf("strcat(str1, str2): %s\n", str1);
    uz = strlen(str1);
    printf("strlen(str1): %i\n", uz);
    return 0;
}
