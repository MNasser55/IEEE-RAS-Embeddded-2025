#include <stdio.h>
#include <stdlib.h>

int main(){
int array1[3][3],array2[3][3];
printf("matrix 1:\n");
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        scanf("%d",&array1[i][j]);
    }
}
printf("matrix 2:\n");
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        scanf("%d",&array2[i][j]);
    }
}

printf("Sum of both matrix=\n");
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("%d ",array1[i][j]+array2[i][j]);
    }
     printf("\n");
}

}





