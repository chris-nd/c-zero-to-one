#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // Longueur de chaîne
    // strlen n'inclut pas '\0'(le caractère d'échappement de fin)
    // strlen renvoie la taille réelle d'une chaîne et non la taille mémoire en octet
    printf("%zu\n", strlen(alphabet));

    // Concaténation de chaîne
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // strcat(str1, str2);
    printf("%s\n", strcat(str1, str2));

    // Copie de chaîne
    char str3[] = "Hello World!";
    char str4[20];

    // strcpy(str4, str3);
    printf("%s\n", strcpy(str4, str3));

    // Comparaison des chaînes
    char strcomp1[] = "Hello"; 
    char strcomp2[] = "Hello";
    char strcomp3[] = "Hi";

    printf("%d\n", strcmp(strcomp1, strcomp2)); // 0, les chaînes sont égales
    printf("%d\n", strcmp(strcomp1, strcomp3)); // -4, les caractères qui sont différents
}
