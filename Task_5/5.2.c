#include <stdio.h>
#include <stdlib.h>

void get_odd(int *a, int size, int **odds, int *odd_count) {
    *odd_count = 0;
    for (int i = 0; i < size; i++) {
        if (*(a + i) % 2 != 0) {
            (*odd_count)++;
        }
    }
*odds = (int *)malloc(*odd_count * sizeof(int));

int index = 0;
    for (int i = 0; i < size; i++) {
        if (*(a + i) % 2 != 0) {
            (*odds)[index++] = *(a + i);
        }
    }
}
int main() {
    int a[100], count = 0;
    printf("Enter numbers (end with -1):\n");

    for (int i = 0; i < 100; i++) {
        scanf("%d", a + i);
        if (*(a + i) == -1) break;
        count++;
    }

    int *odd_numbers = NULL;
    int odd_count = 0;

    get_odd(a, count, &odd_numbers, &odd_count);
    printf("Odd numbers are:");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_numbers[i]);
    }
    printf("\nTotal odd numbers: %d\n", odd_count);

    free(odd_numbers);

    return 0;
}
