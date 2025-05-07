#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p1=(int *)malloc(3*sizeof(int)); //malloc
    if (p1==NULL){
        printf("the space isn't allocated");
    }else{
        printf("the space is allocated");
    }
    printf("\n");
    for(int i=0 ;i<3;i++){
        *(p1+i)=i;
    }
     for(int i=0 ;i<3;i++){
       printf("%d ",*(p1+i));
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


 free(p2);
 free(p1); //make sure to free them

 int *p4=(int *)malloc(100000000000000*sizeof(int)); //large malloc
    if (p4==NULL){
        printf("the space isn't allocated");
    }else{
        printf("the space is allocated");
    }
    printf("\n");
    for(int i=0 ;i<10;i++){
        *(p4+i)=i;
    }
     for(int i=0 ;i<10;i++){
       printf("%d ",*(p4+i));
    }
    printf("\n");

    free(p4);


    return 0;
}
