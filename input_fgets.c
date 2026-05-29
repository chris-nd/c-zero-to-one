#include <stdio.h>

int main() {
    /*
    * fgets() permet de lire une chaîne de caractères jusqu'à ce qu'un caractère de fin de ligne('\0') soit rencontré
    * sizeof() renvoie la taille en octets du tableau
    * stdin est le flux d'entrée standard (clavier)
    */
    char fullName[30];
    printf("Enter your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s", fullName);
    return 0;
}
