#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    int count = 0;
    char last = '\0'; //like null in integer

    for (int i = 0; i < n; i++) {
        if (s[i] != last) {
            count++;
            last = s[i];
        }
    }

    printf("%d\n", count);
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/submission/316034333
