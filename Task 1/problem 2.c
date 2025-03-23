
//problem 2
#include <stdio.h>

int main() {
    int NUM ,year=0,month=0,day =0;
    scanf("%d",&NUM);
    for (;;){
        if (NUM >=365){
           year++;
           NUM-=365;
     }else if (NUM >= 30){
         month++;
         NUM-=30;
     }else{
     day=NUM;
     break ;
     }
    }
    printf("%d years\n",year);
    printf("%d months\n",month);
    printf("%d days",day);
    return 0;
 }
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/311871480
