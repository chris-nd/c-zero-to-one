#include <stdio.h>

int main()
{
    int myNum = 5;
    float myFloatNum = 5.99;
    double myDoubleNum = 9.98;
    char myLetter = 'D';

    printf("Integer: %d\n", myNum);
    printf("Integer: %i\n", myNum);

    printf("Float: %f\n", myFloatNum);
    printf("Float: %F\n", myFloatNum);

    printf("Double: %lf\n", myDoubleNum);
    printf("Character: %c\n", myLetter);

    // Affichage de caractères avec la notation ASCII
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);

    // Imprime le dernier caractère
    char myText = "Hello World!";
    printf("Character: %c\n", myText);

    // Chaîne de caractères
    char myText2[] = "Hello World!";
    printf("String: %s\n", myText2); // Imprime la chaîne de caractères

    // Notation scientifique pour les grands nombres
    float f1 = 35e3;  // 35 * 10^3 = 35000
    double d1 = 12E4; // 12 * 10^4 = 120000

    printf("%f\n", f1);
    printf("%lf\n", d1);

    float myFloatNum2 = 3.5;

    printf("%f\n", myFloatNum2);   // Affiche le nombre à virgule flotante entierement
    printf("%.0f\n", myFloatNum2);   // Affiche le nombre à virgule flotante entierement
    printf("%.1f\n", myFloatNum2); // Affiche 1 chiffre après la virgule
    printf("%.2f\n", myFloatNum2); // Affiche 2 chiffres après la virgule
    printf("%.4f", myFloatNum2);   // Affiche 4 chiffres après la virgule

    // Taille d'allocation mémoire en octets
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%zu\n", sizeof(myInt)); // Affiche la taille de l'entier (4 octets)
    printf("%zu\n", sizeof(myFloat)); // Affiche la taille du nombre à virgule flottante (4 octets)
    printf("%zu\n", sizeof(myDouble)); // Affiche la taille du nombre à virgule flottante double précision (8 octets)
    printf("%zu\n", sizeof(myChar)); // Affiche la taille du caractère (1 octet)

    // Les types de données étendus

    int normalInt = 1000;                       // int standard
    double normalDouble = 3.14;                 // double standard

    short int small = -100;                     // smaller int
    unsigned int count = 25;                    // only positive int
    long int big = 1234567890;                  // larger int
    long long int veryBig = 9223372036854775807; // very large int
    unsigned long long int huge = 18446744073709551615U; // very large, only positive
    long double precise = 3.141592653589793238L; // extended precision

    printf("Normal int: %d\n", normalInt); // Affiche l'entier standard
    printf("Normal double: %lf\n", normalDouble); // Affiche le double standard
    printf("Small: %hd\n", small); // Affiche le petit entier
    printf("Count: %u\n", count); // Affiche l'entier standard non négatif
    printf("Big: %ld\n", big); // Affiche le grand nombre à virgule flotante
    printf("Very Big: %lld\n", veryBig); // Affiche le très grand nombre à virgule flotante
    printf("Huge: %llu\n", huge); // Affiche l'énorme entier non négatif
    printf("Precise: %Lf\n", precise); // Affiche le grand nombre à virgule flotante à précision étendue

    // Les tailles exactes dépendent de votre système et de votre compilateur

    printf("Size of int: %zu bytes\n", sizeof(int)); // 4 octets
    printf("Size of double: %zu bytes\n", sizeof(double)); // 8 octets
    printf("Size of short int: %zu bytes\n", sizeof(short int)); // 2 octets
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int)); // 4 octets
    printf("Size of long int: %zu bytes\n", sizeof(long int)); // 8 octets
    printf("Size of long long int: %zu bytes\n", sizeof(long long int)); // 8 octets
    printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int)); // 8 octets
    printf("Size of long double: %zu bytes\n", sizeof(long double)); // 16 octets

}
