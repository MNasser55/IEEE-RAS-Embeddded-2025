#include <stdio.h>
#include "mathops.h"

int main() {
    IntPair values;
    printf("Enter two integers: ");
    scanf("%d %d", &values.a, &values.b);

    // Using struct-based functions
    printf("\n--- Using Struct-Based Functions ---\n");
    printf("Addition: %d\n", add_struct(values));
    printf("Subtraction: %d\n", sub_struct(values));
    printf("Multiplication: %d\n", mul_struct(values));
    printf("Division: %d\n", div_struct(values));
    printf("Exponentiation: %d\n", pow_struct(values));

    // Using standard parameter functions
    printf("\n--- Using Standard Parameter Functions ---\n");
    printf("Addition: %d\n", add(values.a, values.b));
    printf("Subtraction: %d\n", sub(values.a, values.b));
    printf("Multiplication: %d\n", mul(values.a, values.b));
    printf("Division: %d\n", divide(values.a, values.b));
    printf("Exponentiation: %d\n", power(values.a, values.b));

    return 0;
}
