// math_ops.c
#include "math_ops.h"

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        return 0; // Division by zero, could handle error differently
    }
    return a / b;
}
