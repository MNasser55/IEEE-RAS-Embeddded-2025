#include <stdio.h>

int main() {
    // Declare variables
    int i = 100;
    char c = 'A';
    float f = 3.14f;
    long l = 123456789L;

    // Declare pointers
    int *pInt = &i;
    char *pChar = &c;
    float *pFloat = &f;
    long *pLong = &l;

    // Print values and addresses using pointers
    printf("---- Integer ----\n");
    printf("Value: %d\n", *pInt);
    printf("Address: %p\n", (void*)pInt);

    printf("\n---- Character ----\n");
    printf("Value: %c\n", *pChar);
    printf("Address: %p\n", (void*)pChar);

    printf("\n---- Float ----\n");
    printf("Value: %.2f\n", *pFloat);
    printf("Address: %p\n", (void*)pFloat);

    printf("\n---- Long ----\n");
    printf("Value: %ld\n", *pLong);
    printf("Address: %p\n", (void*)pLong);

    // Modify values using pointers
    *pInt = 200;
    *pChar = 'Z';
    *pFloat = 6.28f;
    *pLong = 987654321L;

    // Print updated values
    printf("\n--- After Modification ---\n");
    printf("New int value: %d\n", i);
    printf("New char value: %c\n", c);
    printf("New float value: %.2f\n", f);
    printf("New long value: %ld\n", l);

    return 0;
}
