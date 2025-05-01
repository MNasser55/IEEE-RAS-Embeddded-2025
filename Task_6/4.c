#include <stdio.h>
#include <stdlib.h>
typedef struct{
char name[50];//50
int age;//4
char kind[50];//50
char food[50];//50
char owners_name[50];//50

}pet ;
//like 204
int main() {
   printf("size of struct: %d",sizeof(pet));

}
//i found when i run the code it gives me 208 not 204 cuz of (memory padding)
//memory padding is about gives more bytes more than usual cuz no need to waste the cycle of the memory
//This improves performance on many systems.
