#include <stdio.h>

int main() {
int a=7;
int *aptr;
aptr=&a;
printf("address of a is %p\nvalue of aptr is %p\n\n",&a,aptr);
//this will give us the address of "a" and prove that the "aptr" contain the same address of a "how the pointers work "


printf("value of a is %d\nvalue of *aptr is %d\n\n",a,*aptr);
//this will give us the value of "a" and prove that the "*" make the pointer get the value of the address that it contains



printf("showing that * and & are complements of each other \n");
printf("&*aptr= %p\n*&aptr=%p\n ",&*aptr,*&aptr);
// for "*aptr"  gives us the value of "a" and with "&" gets the address of this value "the address of a"  .
// for  "&aptr" gives us the address of "aptr" and with "*" that gets the value that in the pointer and this address is the address of "a"



    return 0;
}
