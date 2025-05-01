#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char day [3];
    char month [3];
    char year[5];
}data;

void compare_function(data *m,data *n){
if (strcmp(m->day, n->day) &&
        strcmp(m->month, n->month)&&
        strcmp(m->year, n->year)) {//strcmp if it achieved will retrun 0
        printf("\n Dates are not equal.\n");
    } else {
        printf("\n Dates are equal.\n");
    }
}
int main() {
    printf("--first date--\n");
    data first ;
    data *p1=&first;
    printf("enter day: ");
    scanf("%s",first.day );
    printf("enter month: ");
    scanf("%s",first.month);
    printf("enter enter year: ");
    scanf("%s",first.year);
    printf("\n--second date--\n");
    data second;
    data *p2=&second;
    printf("enter day: ");
    scanf("%s",second.day );
    printf("enter month: ");
    scanf("%s",second.month);
    printf("enter enter year: ");
    scanf("%s",second.year);
 compare_function(p1,p2);

    return 0;
}
