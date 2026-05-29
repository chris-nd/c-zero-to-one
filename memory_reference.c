#include <stdio.h>

int main() {
    int myAge = 43;

    // Affiche la référence à l'adresse 
    // mémoire de la variable myAge en hexadécimal
    // &myAge est appelé communement POINTEUR

    /*
    * Un pointeur stocke l'adresse mémoire d'une varaible comme valeur
    */
    printf("%p", &myAge); // Ex: 0x7ff7b082097

}
