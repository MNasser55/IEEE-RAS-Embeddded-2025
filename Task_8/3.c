#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p=(int *)malloc(3*sizeof(int)); //malloc
    if (p==NULL){
        printf("the space isn't allocated");
    }else{
        printf("the space is allocated");
    }
    printf("\n");
    for(int i=0 ;i<3;i++){
        *(p+i)=i;
    }
     for(int i=0 ;i<3;i++){
       printf("%d ",*(p+i));
    }
    printf("\n");

    int *p2=(int *)calloc(3,sizeof(int));//calloc
        if (p2==NULL){
        printf("the space isn't allocated");
    }else{
        printf("the space is allocated");
    }
    printf("\n") ;
for(int i=0 ;i<3;i++){
        *(p2+i)=i;
    }
     for(int i=0 ;i<3;i++){
       printf("%d ",*(p2+i));
    }

    printf("\n");

 int *p3 = (int *)realloc(p, 6* sizeof(int)); //realloc
 if (p2==NULL){
        printf("the space isn't allocated");
    }else{
        printf("the space is allocated");
    }
    printf("\n") ;

 for(int i=3;i<6;i++){
        *(p3+i)=i+5;
    }
     for(int i=0;i<6;i++){
       printf("%d ",*(p3+i));
    }
 free(p2);
 free(p3); //make sure to free them

    return 0;
}
