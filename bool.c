#include <stab.h>
#include <stdbool.h> 

int main(){

    /* Le type bool ne fait pas partie des types de données 
    *  built-in en C qui sont définis dans la librairie standard, 
    *  mais est disponible dans <stdbool.h>
    */

    bool isCodingFun = true;
    bool isFishTasty = false;

    // Les variables booléennes renvoient des entiers soit 0 soit 1
    printf("Is coding fun: %d\n", isCodingFun); // Affiche 1
    printf("Is fish tasty: %d\n", isFishTasty); // Affiche 0

    int x = 10;
    int y = 9;
    bool result = x > y;
    printf("%d\n", result); // Affiche 1
}
