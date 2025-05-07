
// mathops.c
#include "mathops.h"
#include <stdio.h>

int add_struct(IntPair pair) {
    return pair.a + pair.b;
}

int sub_struct(IntPair pair) {
    return pair.a - pair.b;
}

int mul_struct(IntPair pair) {
    return pair.a * pair.b;
}

int div_struct(IntPair pair) {
    if (pair.b == 0) {
        printf("Error: Division by zero.\n");
        return 0;
    }
    return pair.a / pair.b;
}

int pow_struct(IntPair pair) {
    int result = 1;
    for (int i = 0; i < pair.b; i++) {
        result *= pair.a;
    }
    return result;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0;
    }
    return a / b;
}

int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
