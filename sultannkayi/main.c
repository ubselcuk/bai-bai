// main.c
#include <stdio.h>
#include "math_ops.h"

int main() {
    double num1, num2, result;
    char op;

    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if(num2 == 0) {
                printf("Cannot divide by zero!\n");
                return 1;
            }
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operation!\n");
            return 1;
    }
    printf("Result: %.2lf\n", result);
    return 0;
}

// To compile the program, use the following command:
// gcc main.c math_ops.c -o calculator
