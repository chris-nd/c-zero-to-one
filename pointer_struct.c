#include <stdio.h>

struct Car {
    char brand[30];
    int year;
};

void updateYear(struct Car *car) {
    car->year = 2026;
}

int main() {
    struct Car car = {"Toyota", 2020};

    // Pointeur de structure
    struct Car *ptrCar = &car;

    printf("Brand: %s\n", ptrCar->brand);
    printf("Year: %d\n", ptrCar->year);

    updateYear(ptrCar);
    printf("Updated Year: %d\n", ptrCar->year);

    return 0;
}
