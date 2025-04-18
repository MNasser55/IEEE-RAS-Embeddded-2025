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
lucky(array);
    return 0;
}

void lucky(int m []){
   int minnum=m[0],count=0;
for (int x =0 ;x<n ;x++){
    if(minnum>m[x]){
        minnum=m[x];
}
}
for (int y=0 ;y<n ;y++){
    if (minnum==m[y]) count++;
}
if (count%2==1){
    printf("Lucky");
}else {
    printf("Unlucky");
    }

}//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316039658
