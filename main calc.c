#include <stdio.h>
#include <math.h>

float sum(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

float squareRoot(float num) {
    if (num >= 0) {
        return sqrt(num);
    } else {
        printf("Error: Invalid input for square root\n");
        return 0;
    }
}

float power(float base, float exponent) {
    return pow(base, exponent);
}

int main() {
    float num1, num2, result;
    int choice;

    printf("Simple Calculator\n");
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = sum(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = subtraction(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = multiplication(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = division(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%f", &num1);
            result = squareRoot(num1);
            printf("Result: %.2f\n", result);
            break;
        case 6:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = power(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
