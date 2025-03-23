//problem 4

#include <stdio.h>
#include <stdlib.h>

void SequenceAndSum(int start, int end) {
    int sum = 0;

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for (int i = start; i <= end; i++) {
        printf("%d ", i);
        sum += i;
    }

    printf("sum =%d\n", sum);
}

int main() {
    int a, b;

    while (1) {
        scanf("%d %d", &a, &b);

        if (a <= 0 || b <= 0) {
            break;
        }

        SequenceAndSum(a, b);
    }

    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/312102448
