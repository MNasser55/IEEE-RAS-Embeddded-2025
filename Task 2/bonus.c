//bonus
#include <stdio.h>

int canReachN(long long current, long long N) {
    if (current == N) return 1;
    if (current > N) return 0;
    return canReachN(current * 10, N) || canReachN(current * 20, N);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);
        if (canReachN(1, N))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312823603
