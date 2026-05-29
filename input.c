#include <stdio.h>

int main() {

    int myNum;

    printf("Entrer un nombre: ");

    // & : opérateur de référence mémoire
    // &myNum renvoie la référence de l'adresse mémoire allouée à la variable myNum
    scanf("%d", &myNum);
    printf("Vous avez entré : %d\n", myNum);

    // scanf peut prendre plusieurs données en entrée
    int myNum1;
    char myChar;

    printf("Entrez un nombre et un caractère: ");
    scanf("%d %c", &myNum1, &myChar);
    printf("Vous avez entré : %d et %c\n", myNum1, myChar);

    char firstName[30];

    // On peut omettre l'opérateur de référence &
    // parce que les tableaux fournissent 
    // l'adresse mémoire en référençant directement le premier élément
    // car les espaces blancs sont traités comme des caractères de fin
    // Ex: char name[30] = John Dhoe => John

    /*
    * En C, le nom d'un tableau se dégrade automatiquement (array decay) 
    * en un pointeur vers son premier élément
    */

    printf("Enter your first name: \n");
    scanf("%s", firstName);
    printf("Hello %s\n", firstName);

}
