#include <stdio.h>

int main()
{
   int *x,*y,n,m;
   printf("num1:");
   scanf("%d",&n);
   printf("num2:");
   scanf("%d",&m);

   x=&n;
   y=&m;

   printf("\nSum= %d\n",(*x)+(*y));
   printf("Difference= %d\n",(*x)-(*y));
   printf("Product= %d\n",(*x)*(*y));
   printf("Quotient= %d\n",(*x)/(*y));
    return 0;
}

