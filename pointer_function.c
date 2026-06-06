#include <stdio.h>

// Déclaration d'un pointeur de fonction
int (*ptr)(int, int);

// Déclaration de fonction
void add() { printf("Add\n"); }
void subtract() { printf("Subtract\n"); }
void multiply() { printf("Multiply\n"); }

int main() {

    ptr = add; // Le nom de fonction représente déjà son adresse en mémoire
    ptr = &add;
    return 0;

    // Appel de la fonction via le pointeur
    int result = ptr(5, 3);
    printf("Result= %d\n", result); // Affiche: Result= 8
    int result = (*ptr)(5, 3);
    printf("Result= %d\n", result); // Affiche: Result= 8
    
    // Tableau de pointeurs de fonction
    void (*operations[3])() = { add, subtract, multiply };
    for (int i = 0; i < 3; i++) {
      operations[i]();
    }
}

// Définition de la fonction
int add(int a, int b) {
    return a + b;
}


int main() {
  return 0;
}

