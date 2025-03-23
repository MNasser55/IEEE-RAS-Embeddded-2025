//problem 8
#include <stdio.h>

int main() {
    int Num ,sum =0;
    scanf("%d",&Num);
    for (int i =1 ; i<Num ; i++){
        if (Num%i==0){
            //printf("%d\n",i);
            sum+=i;
        }
    }
    if (sum==Num){
        printf("%d is a perfect number",Num);
    }else{
        printf("%d is not a perfect number",Num);
    }


return 0;
}
