#include <stdio.h>

// Déclaration de fonction

void myFunction();
void myFunction2(char name[], int age);
void myFunction3(int a, int b);
void myFunction4(int array[5]);
int myFunction5(int a, int b);

// Fonction principale

int main()
{
    myFunction();
    myFunction2("John", 36);
    myFunction2("Jane", 25);
    myFunction3(10, 20);
    myFunction3(30, 40);

    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    myFunction4(array1);
    myFunction4(array2);
    myFunction4((int[]){6, 7, 8, 9, 10});
    return 0;
}

// Définition de fonction

// Fonction avec valeur de retour

int myFunction5(int a, int b) {
    return a + b;
}

// Fonction sans valeur de retour

void myFunction4(int array[5]) {
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void myFunction3(int a, int b) {
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
}

void myFunction2(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}

void myFunction() {
    printf("Fonction sans valeur de retour\n");
}

