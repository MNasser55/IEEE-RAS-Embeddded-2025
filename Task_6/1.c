#include <stdio.h>
#include <stdlib.h>
typedef struct{
char name[50];
int age;
char kind[50];
char food[50];
char owners_name[50];

}pet ;

typedef struct{
char name[50];
int salary;
int id;
char job_title[50];

}employee ;

int main() {
    pet m4m4={
        "m4m4",
        3,
        "golden_dog",
        "dryfood",
        "mohamed"

    };
    printf("------dog/cat----- \n\n");
printf("name = %s\n",m4m4.name);
printf("age = %d\n",m4m4.age);
printf("food = %s\n",m4m4.food);
printf("kind = %s\n",m4m4.kind);
printf("owners_name = %s",m4m4.owners_name);

employee nasser={
        "mohamed nasser ibrahim",
        10000,
        "0123",
        "Mechatronics engineer",

    };
    printf("\n\n------employee-----\n");
printf("\nname = %s\n",nasser.name);
printf("salary = %d$\n",nasser.salary);
printf("id = %s\n",nasser.id);
printf("job_title = %s\n",nasser.job_title);

}
