//problem 8
#include <stdio.h>

int no_name(int n);
int s=0 , array[100], i=0,m;
int main() {
 int x;
 scanf("%d",&x);

printf("%d",no_name(x));
 return 0;
}
int no_name(int n){
if (n == 1) return 1;
    if (n % 2 == 0) return 1 + no_name(n / 2);
    if (n%2) return 1 + no_name(3 * n + 1);
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312733916
