#include <stdio.h>

int main(){
    /*
    * Conversion implicite
    */
   
    int x = 5;
    int y = 2;
    int divide = 5 / 2; // On obtient 2 (entier)
    printf("%i\n", divide);

    float myFloat = 9;
    printf("%f\n", myFloat); // On obtient 9.000000 (flottant)

    int myInt = 9.77;
    printf("%d\n", myInt); // On obtient 9 (entier)

    /*
     * Conversion explicite
     */

    float divide2 = (float)5 / (float)2; // On obtient 2.5 (flottant)
    printf("%f\n", divide2);

    float myFloat2 = (float)9;
    printf("%.1f\n", myFloat2); // On obtient 9.0 (flottant)

    float myFloat3 = (float)9.77;
    printf("%.2f\n", myFloat3); // On obtient 9.77 (flottant)
}