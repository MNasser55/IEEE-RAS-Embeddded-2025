//problem 7

#include <stdio.h>

int prime(int x);

int main() {
    int Num ,sum=0 ;
    scanf("%d",&Num);
    while(Num!=0){
        sum+=(Num%10);
        Num/=10;
    }

    if (sum)
    if (prime(sum)){
        printf("The sum of digits (%d) is a prime number.",sum);
    }else{
        printf("The sum of digits (%d) is not a prime number.",sum);
    }

}
int prime(int x){
    if (x<=1) return 0;
    if (x==2 ||x==3) return 1;
    if (x%2==0) return 0;
    for (int i=3 ;i<x;i++){
        if(x%i==0) {
            return 0;
        }
    }
    return 1;
}
