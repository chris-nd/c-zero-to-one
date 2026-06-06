#include <stdio.h>

void greetMorning() {printf("Good morning!\n");}

void greetEvening() {printf("Good evening!\n");}

// Definition de fonction avec callback
void greet(void (*func)()) {
    func();
}

int main() {
    greet(greetMorning);
    greet(greetEvening);

    return 0;
}
