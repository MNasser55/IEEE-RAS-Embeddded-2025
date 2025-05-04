#include <stdio.h>

typedef union {
    int a;
    float b;
    char c;
}Data;

int main() {
   Data data;

    data.a = 65;
    printf("After assigning a = 65:\n");
    printf("a: %d\n", data.a);
    printf("b: %f\n", data.b);
    printf("c: %c\n", data.c);
    printf("--------------------------\n");

    data.b = 3.14;
    printf("After assigning b = 3.14:\n");
    printf("a: %d\n", data.a);
    printf("b: %f\n", data.b);
    printf("c: %c\n", data.c);
    printf("--------------------------\n");

    data.c = 'Z';
    printf("After assigning c = 'Z':\n");
    printf("a: %d\n", data.a); //here i found it print a huge num instead of 90 ?
    printf("b: %f\n", data.b);
    printf("c: %c\n", data.c);
    printf("--------------------------\n");

    return 0;
}
