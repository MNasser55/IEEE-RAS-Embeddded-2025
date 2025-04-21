#include <stdio.h>
#include <ctype.h>  // for isdigit()


void printEvenDigits(const char *str) {
    while (*str != '\0') {
        if (isdigit(*str)) {
            int digit = *str - '0';  // Convert char to integer
            if (digit % 2 == 0) {
                printf("%d\n", digit);
            }
        }
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string containing digits: ");
    scanf("%s", str);  // Read string from user

    printf("Even digits in the string:\n");
    printEvenDigits(str);

    return 0;
}
