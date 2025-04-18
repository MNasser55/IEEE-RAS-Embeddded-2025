#include <stdio.h>
#include <stdlib.h>
int n=0;
int main()
{
    int array[100000],s;
    scanf("%d",&n);
    for (int i =0 ;i<n;i++){
        scanf("%d",&array[i]);
    }

scanf("%d",&s);
searcharray(s,array);
    return 0;
}
void searcharray(int m, int s []){
    int theposition=-1;
for (int x =0 ;x<n ;x++){
    if(s[x]==m){
        theposition=x;
break;
}

}
printf("%d",theposition);

}

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316081530
