//problem 1
#include <stdio.h>

void divisible(int num1, int num2);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    divisible(x, y);
    return 0;
}
void divisible(int num1, int num2) {
    if (num2 == 0) {
        printf("Division by zero is not allowed\n");
        return;
    }
    if (num1 % num2 == 0) {
        printf("%d is divisible by %d\n", num1, num2);
    } else {
        printf("%d is not divisible by %d\n", num1, num2);
    }
}
