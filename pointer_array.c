#include <stdio.h>

int main() {
    int myNumbers[4] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%p:s %d -> %zu octets\n", &myNumbers[i], myNumbers[i], sizeof(myNumbers[i]));
    }

    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);
    printf("%d\n", *myNumbers);
    printf("%d\n", *(myNumbers + 1));
    printf("%d\n", *(myNumbers + 2));
    printf("%d\n", *(myNumbers + 3));

    /* Parcourir un tableau à l'aide d'un pointeur */
    int myNumbers2[4] = {25, 50, 75, 100};
    int* ptr = myNumbers2;
    int i;

    for(i = 0; i < 4; i++) {
        printf("%p\n", *(ptr + i));
    }

    /* Modifier les éléments d'un tableau à l'aide d'un pointeur */
    int myNumbers[4] = {25, 50, 75, 100};
    *myNumbers = 13;
    *(myNumbers +1) = 17;
    printf("%d\n", *myNumbers);
    printf("%d\n", *(myNumbers + 1));
}