#include <stdio.h>

typedef enum {
    ADD = '+',
    SUB = '-',
    MUL = '*',
    DIV = '/',
    AND = '&',
    OR  = '|',
    NOT = '!'
} Operation;

void calculate(int x, int y, char opreration) {
    switch ((Operation)opreration) {
        case ADD:
            printf("Result: %d\n", x + y);
            break;
        case SUB:
            printf("Result: %d\n", x - y);
            break;
        case MUL:
            printf("Result: %d\n", x * y);
            break;
        case DIV:
            if (y != 0)
                printf("Result: %d\n", x / y);
            else
                printf("Error: Division by zero!\n");
            break;
        case AND:
            printf("Result: %d\n", x & y);
            break;
        case OR:
            printf("Result: %d\n", x | y);
            break;
        case NOT:
            printf("Result: %d\n", ~x);
            break;
        default:
            printf("Invalid operation!\n");
    }
}

int main() {
    int n1, n2;
    char opreration;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number : ");
    scanf("%d", &n2);
    printf("Enter operation (+, -, *, /, &, |, !): ");
    scanf(" %c", &opreration);
    calculate(n1, n2, opreration);

    return 0;
}
