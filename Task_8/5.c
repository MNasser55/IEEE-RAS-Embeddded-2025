#include <stdio.h>

int main() {
int n,sum;
printf("Enter the size of array:");
scanf("%d",&n);
 printf("\n");
int *arr=(int *)malloc(n*sizeof(int));

if (arr==NULL){
        printf("the space isn't allocated");
    }else{
        printf("the space is allocated");
    }
 printf("\n\n");
printf("Enter the array:");
for(int i=0 ;i<n;i++){
    scanf("%d",arr+i);
    sum+=*(arr+i);
}
 printf("\n");
printf("The array is:");
for(int i=0 ;i<n;i++){
    printf("%d ",*(arr+i));

}
 printf("\n");
    printf("the sum is %d",sum);
 printf("\n");
free(arr);
    return 0;
}
