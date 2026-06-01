#include <stdio.h>

int main() {
    int myNumbers[3] = {10, 20, 30};
    int *p = myNumbers;

    printf("%d\n", *p); // 10
    p++;
    printf("%d\n", *p); // 20
    p--;
    printf("%d\n", *p); // 10
    p += 2;
    printf("%d\n", *p); // 30

    // Obtenir le nombre d'élément compris entre deux pointeurs

    /*
    * La soustraction de pointeurs ne fonctionne que si les deux pointeurs pointent 
    * vers le même tableau . Le résultat est exprimé en éléments , et non en octets.
    */
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int *start = &myNumbers[1];
    int *end = &myNumbers[4];

    printf("%ld\n", end - start);

    // Parcourir une boucle en déplaçant le pointeur

    int myNumbers[4] = {25, 50, 75, 100};
    int *p = myNumbers;

    for (int i = 0; i < 4; i++) {
        printf("%d\n", *p);
        p++;
    }
}