
// mathops.h
#ifndef MATHOPS_H
#define MATHOPS_H

typedef struct {
    int a;
    int b;
} IntPair;

// Function declarations (struct-based)
int add_struct(IntPair pair);
int sub_struct(IntPair pair);
int mul_struct(IntPair pair);
int div_struct(IntPair pair);
int pow_struct(IntPair pair);

// Function declarations (standard parameters)
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);
int power(int a, int b);

#endif
