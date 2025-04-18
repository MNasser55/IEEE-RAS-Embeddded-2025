#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int n;
printf("Enter the size of the square:");
    scanf("%d", &n);
    int array[n][n];
printf("Enter the elements of the square:\n");
    for (int i = 0; i < n; i++) {
        for(int j =0;j<n;j++){
          scanf("%d", &array[i][j]);
        }

    }
for(int i=0 ;i<n;i++){
       int  sum1=0,sum2=0,sum3=0,sum4=0;
    for (int j = 0; j < n; j++) {
          sum1+=array[j][i];
          sum2+=array[i][j];
          sum3+=array[i][i];
          sum4+=array[n-1][j];
        }
if (sum1==sum2){
    printf("The square is a magic square.");
    return 0;
}
else if (sum1==sum3){
    printf("The square is a magic square.");
    return 0;
}
else if (sum1==sum4){
    printf("The square is a magic square.");
    return 0;
}else{
    printf("The square is Not a magic square.");
    return 0;
}

}
    return 0;
}


