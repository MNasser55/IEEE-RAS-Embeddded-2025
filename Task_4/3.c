#include <stdio.h>
#include <stdlib.h>

void swap(int* x,int* y){
 int temp=*x;
   *x=*y;
   *y=temp;

}

int main()
{
   int n,m;
   printf("a: ");
   scanf("%d",&n);
   printf("b: ");
   scanf("%d",&m);

   swap(&n,&m);

   printf("\na: %d\n",n);
   printf("b: %d\n",m);
    return 0;
}

