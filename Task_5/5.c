#include <stdio.h>

void get_odd(int *a,int size){
    int count=0;
    printf("Odd numbers are:");
for(int i=0 ;i<size;i++){
    if((*(a+i))%2==1){
        printf("%d ",*(a+i));
        count++;
    }
}
printf("\n");
printf("Total odd numbers: %d",count);
}

int main() {
    int a[100],count=0;
    printf("Enter numbers (end with -1):\n");//atoi
    for(int i=0 ;i<100;i++){
        scanf("%d",a+i);
        if(*(a+i)==-1) break ;
        count++;
    }
get_odd(a,count);


    return 0;
}
