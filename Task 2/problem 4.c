//problem 4
#include <stdio.h>


int main() {
    int x ,m;
    scanf("%d",&x);
    poom(x);
 return 0;
}

void poom(int start){


if (start>0){
    poom(start-1);
    printf("%d\n",start);

}

}
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312845175
