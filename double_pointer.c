#include <stdio.h>

int main() {
    
    int myNum = 10; // variable normal
    int *ptr = &myNum; // pointer vers un entier
    int **pptr = &ptr; // pointer de pointer

    printf("myNum = %d\n", myNum); // myNum = 10
    printf("*ptr = %d\n", *ptr);   // *ptr = 10
    printf("**pptr = %d\n", **pptr); // **pptr = 10

    // Modification d'un double pointeur
    **pptr = 20;
    printf("myNum après modification de **pptr = %d\n", myNum); // myNum = 20

    return 0;
}
