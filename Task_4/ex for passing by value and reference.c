#include <stdio.h>


void passByValue(int a) {
    a = a + 10;
    //printf("Inside passByValue: a = %d\n", a);
}

void passByReference(int *a) {
    *a = *a + 10;// like num2=num2+10
    //printf("Inside passByReference: a = %d\n", *a);
}

int main() {
    int num1 = 5;
    int num2 = 5;

    passByValue(num1);
    printf("After passByValue: num1 = %d\n\n", num1);// wont change cuz num1 is local value not global so we will use pointer

    passByReference(&num2);
    printf("After passByReference: num2 = %d\n", num2);

    return 0;
}
