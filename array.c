#include <stdio.h>

int main(){

    /*
    *  Un tableau est une variable qui peut stocker
    *  plusieurs valeurs de même type.
    */

    int myNumbers[] = {25, 50, 75, 100};
    printf("%d\n", myNumbers[0]); // Affiche 25
    printf("%d\n", myNumbers[1]); // Affiche 50
    printf("%d\n", myNumbers[2]); // Affiche 75
    printf("%d\n", myNumbers[3]); // Affiche 100

    int myNumbers2[4] = {25, 50, 75, 100};
    printf("%d\n", myNumbers2[0]); // Affiche 25
    printf("%d\n", myNumbers2[1]); // Affiche 50
    printf("%d\n", myNumbers2[2]); // Affiche 75
    printf("%d\n", myNumbers2[3]); // Affiche 100

    int myNumber3[4];

    myNumber3[0] = 25;
    myNumber3[1] = 50;
    myNumber3[2] = 75;
    myNumber3[3] = 100;

    printf("%d\n", myNumber3[0]); // Affiche 25
    printf("%d\n", myNumber3[1]); // Affiche 50
    printf("%d\n", myNumber3[2]); // Affiche 75
    printf("%d\n", myNumber3[3]); // Affiche 100

    // Bouclé un tableau avec formule sizeof
    // sizeof(array) / sizeof(array[0])

    int array[] = {2, 4, 5, 6, 7, 8};

    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d\n", array[i]);
    }

    // Tableau multidimensionnel

    /* 
    *  Les tableaux multidimensionnels sont utiles lorsque 
    *  vos données sont organisées en lignes et en colonnes, 
    *  comme un tableau, une grille ou une matrice.
    */

    int matrix[2][3 ] = { {1, 4, 2}, {3, 6, 8} };

    printf("%zu\n", sizeof(matrix));
    printf("%zu\n", sizeof(matrix[0]));
    printf("%zu\n", sizeof(matrix[0][0]));

    for(int i = 0; i < sizeof(matrix) / sizeof(matrix[0]); i++) {
        for(int j = 0; j < sizeof(matrix[0]) / sizeof(matrix[0][0]); j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int array3D[2][4][3] = { {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}, {20, 22, 24}}, {{26, 28, 30}, {32, 34, 36}, {38, 40, 42}, {44, 46, 48}} };

}
