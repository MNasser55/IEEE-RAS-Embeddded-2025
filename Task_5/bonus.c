#include <stdio.h>
#include <stdlib.h>
int string2integer(char* x){
int sign=1,num=0;
if (*x=='-'){
    sign=-1; //if u want the sign with ur number
    x++;
}
while (*x !='\0'){
    num=num*10+(*x-'0');
    x++;
}
return num;//if u want the sign with ur number put >>sign*num<<
}
int main() {
    char s1[]="-70";
    char s2[]="60";
    int n1,n2;
    n1=string2integer(s1);
    n2=string2integer(s2);
    printf("%d\n",n1);
    printf("%d\n",n2);
    return 0;
}
