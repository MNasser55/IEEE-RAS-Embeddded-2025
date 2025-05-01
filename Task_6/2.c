#include <stdio.h>
#include <stdlib.h>
typedef struct{
char name[50];
int age;
char kind[50];
char food[50];
char owners_name[50];

}pet ;

void print_pet(pet pet){
printf("name = %s\n",pet.name);
printf("age = %d\n",pet.age);
printf("food = %s\n",pet.food);
printf("kind = %s\n",pet.kind);
printf("owners_name = %s",pet.owners_name);
}

pet initPet() {
pet p = {"Milo", 2, "Cat", "Fish", "mariam"};
    return p;
}

int main() {
    pet pet1=initPet();
print_pet(pet1);
}
