#include <stdio.h>
#define ADDITION
#define ADD(x, y) ((x) + (y))
#define SUB(x, y) ((x) - (y))

int main() {
    int a, b, result;

    printf("Enter two integers:");
    scanf("%d %d", &a, &b);

#ifdef ADDITION
    result = ADD(a, b);
    printf("\nResult of addition: %d\n", result);
#endif

#ifdef SUBTRACTION
    result = SUB(a, b);
    printf("\nResult of subtraction: %d\n", result);
#endif

    return 0;
}
