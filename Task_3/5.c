#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int n, sum1=0,sum2=0;

    scanf("%d", &n);
    int array[n][n];
    for (int i = 0; i < n; i++) {
        for(int j =0;j<n;j++){

        scanf("%d", &array[i][j]);
        }

    }

for (int i = 0; i < n; i++) {
        for(int j =0;j<n;j++){
            if (i==j){
                sum1+=array[i][j];
            }
             if ((i+j)==(n-1)){
                sum2+=array[i][j];
            }
        }
}
        printf("%d",abs(sum1-sum2) );


    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316029831
