#include <stdio.h>

void copy(char* m ,char* cm){

    while(*m != '\0'){
        *cm = *m;
        m++;
        cm++;
    }
    cm = '\0';


}
int main() {

char s1[100],s2[100];
printf("Str:");
fgets(s1,sizeof(s1),stdin);

copy(s1,s2);

printf("\nOriginal String:%s",s1);
printf("Copied String:%s",s2);

    return 0;
}
