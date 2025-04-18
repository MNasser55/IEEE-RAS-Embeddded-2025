#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[1000],n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    sort(array, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void sort(int m[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (m[j] < m[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(&m[i], &m[min_index]);
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316029115
