#include <stdio.h>

float calculateArea(float side) {
    return side * side;
}

float calculatePerimeter(float side) {
    return 4 * side;
}

int main() {
    float side, area, perimeter;

    printf("Square Calculator\n");
    printf("Enter the length of the side: ");
    scanf("%f", &side);

    area = calculateArea(side);
    perimeter = calculatePerimeter(side);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
