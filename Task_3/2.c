#include <stdio.h>
#include <stdlib.h>
int n=0;
int main()
{
    int array[1000];
    scanf("%d",&n);
    for (int i =0 ;i<n;i++){
        scanf("%d",&array[i]);

    }
smallestnum(array);
    return 0;
}
void smallestnum(int m []){
    int theposition=0,minnum=m[0];
for (int x =0 ;x<n ;x++){
    if(minnum>m[x]){
        minnum=m[x];
        theposition=x;
}

}
printf("%d %d",minnum,theposition+1);

}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315873907
