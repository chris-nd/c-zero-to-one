#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 6; i++) {
        if (i == 2) {
            continue;
        }
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }

    printf("\n");
    
    int myNumbers[] = {3, -1, 7, 0, 9};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    
    printf("%zu octets\n", sizeof(myNumbers));
    printf("%zu octets\n", sizeof(myNumbers[0]));
    
    printf("\n");

    for (i = 0; i < length; i++) {
    if (myNumbers[i] < 0) {
        continue; // skip negative numbers
    }
    if (myNumbers[i] == 0) {
        break; // stop loop when zero is found
    }
    printf("%d\n", myNumbers[i]);
    }
}
