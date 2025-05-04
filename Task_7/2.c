#include <stdio.h>

// Signed integer types
typedef char            t_i8;
typedef short           t_i16;
typedef int             t_i32;
typedef long            t_i64;     // Note: long may be 4 or 8 bytes depending on system

// Unsigned integer types
typedef unsigned char   t_ui8;
typedef unsigned short  t_ui16;
typedef unsigned int    t_ui32;
typedef unsigned long   t_ui64;

// Floating point types
typedef float           t_f32;
typedef double          t_f64;

// Character and Boolean (C-style)
typedef char            t_char;
typedef _Bool           t_bool;

int main() {
    printf("Size of t_i8   (char)           : %lu bytes\n", sizeof(t_i8));
    printf("Size of t_ui8  (unsigned char)  : %lu bytes\n", sizeof(t_ui8));
    printf("Size of t_i16  (short)          : %lu bytes\n", sizeof(t_i16));
    printf("Size of t_ui16 (unsigned short) : %lu bytes\n", sizeof(t_ui16));
    printf("Size of t_i32  (int)            : %lu bytes\n", sizeof(t_i32));
    printf("Size of t_ui32 (unsigned int)   : %lu bytes\n", sizeof(t_ui32));
    printf("Size of t_i64  (long)           : %lu bytes\n", sizeof(t_i64));
    printf("Size of t_ui64 (unsigned long)  : %lu bytes\n", sizeof(t_ui64));
    printf("Size of t_f32  (float)          : %lu bytes\n", sizeof(t_f32));
    printf("Size of t_f64  (double)         : %lu bytes\n", sizeof(t_f64));
    printf("Size of t_char (char)           : %lu bytes\n", sizeof(t_char));
    printf("Size of t_bool (_Bool)          : %lu bytes\n", sizeof(t_bool));

    return 0;
}
