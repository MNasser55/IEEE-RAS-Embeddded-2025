#include <stdio.h>
#include <stdlib.h>
int add(int x,int y){
return x+y;
}
int sub(int x,int y){
return x-y;
}
int multi(int x,int y){
return x*y;
}
int divide(int x,int y){
return x/y;
}
int main() {
    int a,b,c;
    int (*choice)(int,int);
    printf("select an operator:\n");
    printf("1.add\n");
    printf("2.subtract\n");
    printf("3.multiply\n");
    printf("4.divide\n");
    printf("Enter ur choice:");
    scanf("%d",&c);
    printf("Enter to numbers:");
    scanf("%d%d",&a,&b);
  switch(c){
  case (1):
      choice=&add;
      break;

  case (2):
      choice=&sub;
      break;

  case (3):
      choice=multi;//look i can use the name only ;).
      break;

  case (4):
      choice=divide;// so we can remove &.
      break;

default:
    printf("\nU entered a wrong opertation :( ...good bye\n");
return 0;
  }
  int result=(*choice)(a,b);// we could write it like >> result=(*choice)(a,b)<< and that's working also.
  printf("\nResult:%d\n",result);

    return 0;
}
