#include <stdio.h>


typedef struct  {
    char name[50];
    int age;
    char kind[20];
    char food[50];
    char owner[50];
}pet;


pet createPetFromInput() {
 pet p;

    printf("Enter pet name: ");
    scanf(" %[^\n]", p.name);

    printf("Enter pet age: ");
    scanf("%d", &p.age);

    printf("Enter pet kind (e.g., Dog or Cat): ");
    scanf(" %[^\n]", p.kind);

    printf("Enter pet's favorite food: ");
    scanf(" %[^\n]", p.food);

    printf("Enter owner's name: ");
    scanf(" %[^\n]", p.owner);

    return p;
}


void print_Pet( pet p) {
    printf("\n--- Pet Info ---\n\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Kind: %s\n", p.kind);
    printf("Favorite Food: %s\n", p.food);
    printf("Owner: %s\n", p.owner);
}

int main() {
 pet pet = createPetFromInput();
    print_Pet(pet);
    return 0;
}
