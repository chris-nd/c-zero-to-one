#include <stdio.h>

int main()
{

    /* Déclaration et affectation des variables
    Les noms de variables sont appelés identifiants */

    int num = 10;
    float floatingPoint = 3.14f;
    char character = 'A';

    int price;  // Déclaration de variable
    price = 30; // Affectation de variable

    printf("Integer: %d\n", num);                   // Spécification du format de valeur entière
    printf("Floating Point: %f\n", floatingPoint); // Spécification du format de valeur flottante
    printf("Character: %c\n", character);           // Spécification du format de valeur de caractère
    printf("Price: %d\n", price);                   // Spécification du format de valeur entière

    int myNum = num; // Réaffectation de la valeur de num à myNum
    char myLetter = 'D';

    printf("My favorite number is: %d\n", myNum);

    myNum = 20; // Réaffectation de la valeur de myNum

    printf("My number is %d and my letter is %c", myNum, myLetter);

    // Affectation multiple ou en parallèle
    int x, y, z;
    x = y = z = 50;

    // Affectation simultanée
    int a = 10, b = 20, c = 30;
}
