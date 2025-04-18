#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int n,m,temp;

    scanf("%d", &n);
    scanf("%d", &m);
    int array[n][m];
    for (int i = 0; i < n; i++) {
        for(int j =0;j<m;j++){

        scanf("%d", &array[i][j]);
        }

    }

for (int i = 0; i < n; i++) {
        for(int j =0;j<m/2;j++){
          temp=array[i][j];
          array[i][j]=array[i][m-1-j];
          array[i][m-1-j]=temp;
        }
}
for (int i = 0; i < n; i++) {
        for(int j =0;j<m;j++){

        printf("%d ",array[i][j]);
        }
printf("\n");
    }

    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316030064
