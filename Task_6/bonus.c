#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pet {
    char *name;
    int age;
    char *kind;
};


struct Pet* createPet(const char *name, int age, const char *kind) {
    struct Pet *p = (struct Pet*)malloc(sizeof(struct Pet));
    p->name = strdup(name);
    p->age = age;
    p->kind = strdup(kind);
    return p;
}


void freePet(struct Pet *p) {
    free(p->name);
    free(p->kind);
    free(p);
}

int main() {
    struct Pet *myPet = createPet("Luna", 2, "Cat");

    printf("Pet created: %s, Age: %d, Kind: %s\n", myPet->name, myPet->age, myPet->kind);

    freePet(myPet);
    printf("Pet memory freed.\n");

    return 0;
}
