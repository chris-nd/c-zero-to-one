#include <stdio.h>
#include <string.h>

// Une structure encore appelée struct 
// permet de regrouper plusieurs variables 
// de différents types qui sont liées en un seul objet
struct myStructure {
    int myNum; // 1er membre
    char myLetter; // 2ème membre
    char myString[30]; // 3ème membre
};

struct Owner {
    char firstName[30];
    char lastName[30];
};


struct Car {
    char brand[30];
    char model[30];
    int year;
    struct Owner owner;
};


int main() {
    // Déclaration d'une variable de type struct myStructure
    struct myStructure struct1;

    // Initialisation des membres
    struct1.myNum = 5;
    struct1.myLetter = 'A';

    printf("My number: %d\n", struct1.myNum);
    printf("My letter: %c\n", struct1.myLetter);

    struct myStructure struct2;

    struct2.myNum = 10;
    struct2.myLetter = 'B';

    printf("My second number: %d\n", struct2.myNum);
    printf("My second letter: %c\n", struct2.myLetter);

    // Initialisation d'un tableau de caractères avec la fonction de chaîne strcpy
    strcpy(struct1.myString, "Hello, World!");
    printf("My string: %s\n", struct1.myString);

    struct myStructure struct2 = {15, 'C', "Another string!"};

    printf("My third number: %d\n", struct2.myNum);
    printf("My third letter: %c\n", struct2.myLetter);
    printf("My third string: %s\n", struct2.myString);

    struct myStructure struct3;
    struct3 = struct2;

    struct3.myNum = 20;
    struct3.myLetter = 'D';
    strcpy(struct3.myString, "Yet another string!");

    printf("My fourth number: %d\n", struct3.myNum);
    printf("My fourth letter: %c\n", struct3.myLetter);
    printf("My fourth string: %s\n", struct3.myString);

    struct Car car1 = {"Toyota", "Camry", 2020, {"John", "Doe"}};
    struct Car car2 = {"Honda", "Civic", 2019, {"Jane", "Smith"}};
    struct Car car3;
    strcpy(car3.brand, "Ford");
    strcpy(car3.model, "Mustang");
    car3.year = 2021;
    strcpy(car3.owner.firstName, "Bob");
    strcpy(car3.owner.lastName, "Johnson");

    struct Owner owner = {"Alice", "Brown"};
    struct Car car4 = {"BMW", "X5", 2022, owner};

    return 0;
}
