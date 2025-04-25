#include <stdio.h>


void get_the_array(int (*x)[3]) {
    printf("Enter array (3*3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", *(x + i) + j);
        }
    }
}


void print_the_result(int (*y)[3]) {
    printf("Resultant matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", *(*(y + i) + j));
        }
        printf("\n");
    }
}


void multiply_matrices(int (*a)[3], int (*b)[3], int (*c)[3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            *(*(c + i) + j) = 0;
            for(int k = 0; k < 3; k++) {
                *(*(c + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }
}

int main() {
    int a[3][3], b[3][3], c[3][3];

    get_the_array(a);
    get_the_array(b);

    multiply_matrices(a, b, c);

    printf("\n");
    print_the_result(c);

    return 0;
}
