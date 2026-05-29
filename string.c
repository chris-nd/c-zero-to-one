#include <stdio.h>

int main(){

    char greetings[] = "Hello World!";
    printf("%s\n", greetings);
    printf("%c\n", greetings[0]);
    printf("%c\n", greetings[1]);
    printf("%c\n", greetings[2]);
    printf("%c\n", greetings[3]);
    printf("%c\n", greetings[4]);

    greetings[0] = 'J';
    printf("%s\n", greetings);

    for(int i = 0; i < sizeof(greetings) / sizeof(greetings[0]); i++) {
        printf("%c ", greetings[i]);
    }

    /*
    * \0 est un caractère d'échappement de fin de chaîne de caractère
    */
    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetings2);

    printf("%zu\n", sizeof(greetings));
    printf("%zu\n", sizeof(greetings2));

    char message[] = "Good to see you";
    char fname[] = "John";
    char lname[] = "Doe";

    printf("%s %s %s\n", message, fname, lname);

    // Les caractères d'échappement
    printf("\0"); // null
    printf("\nRetour à la ligne ou saut de ligne\n");
    printf("\t Tabulation");

}
