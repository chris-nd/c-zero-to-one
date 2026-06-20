#include <stdio.h>

// Déclaration d'un pointeur de fonction
int (*ptr)(int, int);

// Déclaration de fonction
int add1(int a, int b);
void add2();
void subtract();
void multiply();

int main() {

    ptr = add1; // Le nom de fonction représente déjà son adresse en mémoire
    ptr = &add1; // correspond à (ptr = add1)

    // Appel de la fonction via le pointeur
    int result1 = ptr(5, 3);
    printf("Result= %d\n", result1); // Affiche: Result= 8
    int result2 = (*ptr)(5, 3); // correspond à (ptr(5, 3))
    printf("Result= %d\n", result2); // Affiche: Result= 8
    
    // Tableau de pointeurs de fonction
    void (*operations[3])() = { add2, subtract, multiply };
    for (int i = 0; i < 3; i++) {
      operations[i]();
    }

    return 0;
}

// Définition de la fonction

int add1(int a, int b) {
    return a + b;
}

void add2() { printf("Add\n"); }
void subtract() { printf("Subtract\n"); }
void multiply() { printf("Multiply\n"); }

