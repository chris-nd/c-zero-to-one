#include <stdio.h>

int main() {

    // Un pointeur est une variable qui stocke l'adresse mémoire d'une autre variable.
    
    /*
    * Les pointeurs permettent de manipuler les données dans la mémoire de l'ordinateur; 
    * cela peut réduire le code et améliorer les performances.
    */

    // Une variable pointeur pointe vers le même type de données que celui de la valeur

    int myAge = 48;
    int* myPointer1 = &myAge;
    int *myPointer2 = &myAge;

    printf("%p\n", &myAge);
    printf("%p\n", myPointer1);
    printf("%p\n", myPointer2);

    /*
    * Le signe *:
    * Lorsqu'il est utilisé dans une déclaration ( int* ptr), il crée une variable pointeur .
    * Lorsqu'il n'est pas utilisé dans une déclaration, il agit comme un opérateur de déréférencement
    */

    printf("%d\n", *myPointer1); // Déréférencement (*myPointer1)
    printf("%d\n", *myPointer2); // Déréférencement (*myPointer2)

    int myNumbers[4] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%p\n", &myNumbers[i]);
    }

    // Le déplacement des pointeurs

    /*
    * le déplacement d'un pointeur dépend du type de données vers 
    * lequel il pointe, et non du nombre qui lui est ajouté ou soustrait.
    * Un pointeur int* se déplace de la taille d'un entier (généralement 4 octets).
    * Un pointeur char* se déplace de la taille d'un caractère (1 octet).
    */

    int myNumbers2[2] = {1, 2};
    char letters[] = "Hi"; // 'H', 'i', '\0'

    int *pi = myNumbers2; // int pointer
    char *pc = letters; // char pointer

    printf("%p\n", (void*)pi);
    printf("%p\n", (void*)(pi + 1));
    printf("%p\n", (void*)(pi + 2));

    printf("%p\n", (void*)pc);
    printf("%p\n", (void*)(pc + 1));
}
