//problem 5
#include <stdio.h>

int poom(int m);
int main() {
    int x ,i;
    scanf("%d",&x);
    while(x--){

        scanf("%d",&i);
        poom(i);
        printf("\n");
    }

 return 0;
}
int poom(int m){
    if (m==0){
        return;
    }

poom(m/10);
printf("%d ", m % 10);
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312633618
