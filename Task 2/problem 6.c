//problem 6
#include <stdio.h>

int Fibonacci_number(int n);
int s=0;
int main() {
 int x;
 scanf("%d",&x);
printf("%d",Fibonacci_number(x));
 return 0;
}
int Fibonacci_number(int n){

 if (n == 1) return 0;
    if (n == 2) return 1;
    return Fibonacci_number(n - 1) + Fibonacci_number(n - 2);
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312733208
