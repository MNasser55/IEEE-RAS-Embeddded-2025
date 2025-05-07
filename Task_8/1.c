#include <stdio.h>
#define ASCENDING
#define DESCENDING
#ifdef ASCENDING
int* Ascendingfun(int size){
int *arr=(int *)malloc(size*sizeof(int));
printf("enter the array:");
for(int i=0 ;i<size;i++){
    scanf("%d",arr+i);
}
int index,temp;
for(int i =0; i<size-1;i++){
   temp=*(arr+i);
   index=i;
   for(int j=i+1;j<size;j++){
    if (temp >*(arr+j)){
        temp=*(arr+j);
        index=j;
    }
   }
   if(index!=i){
    *(arr+index)=*(arr+i);
    *(arr+i)=temp;
}
}
return arr;
}
#endif // Ascending

#ifdef DESCENDING
int* Descendingfun(int size){
int *arr=(int *)malloc(size*sizeof(int));
printf("enter the array:");
for(int i=0 ;i<size;i++){
    scanf("%d",arr+i);
}
int index,temp;
for(int i =0; i<size-1;i++){
   temp=*(arr+i);
   index=i;
   for(int j=i+1;j<size;j++){
    if (temp <*(arr+j)){
        temp=*(arr+j);
        index=j;
    }
   }
   if(index!=i){
    *(arr+index)=*(arr+i);
    *(arr+i)=temp;
}
}
return arr;
}
#endif // DESCENDING

int main() {
int *result,x,n;
printf("welcome to my Ascending&DESCENDING program\n");
printf("------------------------------------------\n");
printf("Enter the size of array:");
scanf("%d",&n);
printf("for ASCENDING enter (1) and for DESCENDING enter (-1):");
scanf("%d",&x);
if (x==1){
#ifdef ASCENDING
    result = Ascendingfun(n);
#endif
}else if (x==-1){
#ifdef DESCENDING
    result = Descendingfun(n);
#endif

}else {
printf("\nU entered a wrong answer see ya\n");
return 0;
}
printf("\nUr array after process is :");
for(int i=0 ;i<n;i++){
    printf("%d ",*(result+i));
}
printf("\n");
free(result);
    return 0;
}
