#include <stdio.h>
#include <stdbool.h>

int main() {
    // La structure de branchement if, if...else, if...else if...else
    int time = 16;

    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning) {
        printf("Good morning.");
    } else if (isDay) {
        printf("Good day.");
    } else {
        printf("Good evening.");
    }

    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // 1 = highest

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }


    // La structure de branchement ternaire
    int x = 10;
    int y = 20;
    int max = (x > y) ? x : y;
    printf("%d\n", max);


    // La structure de branchement switch
    int day = 4;

    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Looking forward to the Weekend");
    }
}
