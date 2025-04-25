#include <stdio.h>

int compare(char* m,char* n){
while(*m!='\0'){
    if (*m!=*n) return 0;
    m++;
    n++;
}
return 1;

}
int main() {
    int result;
char s1[100],s2[100];
printf("string1:");
fgets(s1,sizeof(s1),stdin);
printf("string2:");
fgets(s2,sizeof(s2),stdin);
result=compare(s1,s2);
if (result){
    printf("\nBoth strings are Identical\n");
}else{
printf("\nBoth strings are not Identical\n");
}
    return 0;
}
