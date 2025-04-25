#include <stdio.h>
void  ascending(int* m,int size){
    int temp,index;
for(int i=0 ; i<size-1;i++){
        temp=*(m+i);
        index=i;
    for(int j=i+1 ;j<size;j++){
         if(temp>*(m+j)){
            temp=*(m+j);
              index=j;
           }
      }
        if (index!=i){
         *(m+index)=*(m+i);
         *(m+i)=temp;
        }
}
printf("Array in ascending order: ");
print(m,size);
}

void  descending(int* m,int size){
    int temp,index;
for(int i=0 ; i<size-1;i++){
        temp=*(m+i);
        index=i;
    for(int j=i+1 ;j<size;j++){
         if(temp<*(m+j)){
            temp=*(m+j);
              index=j;
           }
      }
        if (index!=i){
         *(m+index)=*(m+i);
         *(m+i)=temp;
        }
}
printf("Array in descending order: ");
print(m,size);
}


void print(int* a,int size){
for(int i=0;i<size;i++){
        if(i!=size-1){
            printf("%d,",*(a+i));
    }else{
        printf("%d",*(a+i));
    }
}
printf("\n");
}

int main() {
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Array elements:");
    for(int i=0;i<size;i++){
            scanf("%d",a+i);
    }
    printf("\n");
ascending(a,size);
descending(a,size);


    return 0;
}
