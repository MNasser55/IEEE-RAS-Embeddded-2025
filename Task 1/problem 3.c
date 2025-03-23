#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int x =0 , palindrome=1;
    char word[20];

    fgets(word,20,stdin);

    x=strlen(word)-1;

    for (int i = 0; i < x; i++) {
        word[i] = tolower(word[i]);
    }


    for (int i =0 ;i<x/2;i++){

    if (word[i]!=word[x-1-i]){
            palindrome=0;
            break ;
        }
    }

    if (palindrome){
printf("The word '%s' is a palindrome.",word);
}else{
printf("The word '%s' is not a palindrome.",word);
    }
 return 0;
}
