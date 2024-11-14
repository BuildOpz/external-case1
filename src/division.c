// division.c
#include "calculations.h"
#include <stdio.h>

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is undefined.\n");
        return 0;  // Return 0 to indicate an error
    }
    return a / b;
}