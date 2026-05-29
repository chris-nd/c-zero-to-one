#include <stdio.h> 

int main() {

    int i = 10;

    do {
        printf("i vaut %d\n", i);
        i++;
    } while (i <= 20);

    int number;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number > 0);
}
