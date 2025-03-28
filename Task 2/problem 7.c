//problem 7
#include <stdio.h>


int GDC(int m, int n) {
    if (n == 0)
        return m;
    return GDC(n, m % n);
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("GCD of %d and %d = %d\n", num1, num2, GDC(num1, num2));

    return 0;
}
