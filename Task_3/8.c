#include <stdio.h>
#include<ctype.h>

int main() {
    int counter=0;
    char s[1000000];

    fgets(s,sizeof(s),stdin);

    for(int i=0 ;s[i]!='\0';i++){

        if (isalpha(s[i])&&!isalpha(s[i+1])) counter++;
    }
printf("%d",counter);
    return 0;
}

//https://codeforces.com/group/MWSDmqGsZm/contest/219856/submission/316038563
