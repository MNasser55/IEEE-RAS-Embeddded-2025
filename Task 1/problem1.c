#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int MaxNUm(int ARRAY[]);
int MinNUM(int ARRAY[]);

int counter=0 ;

int main() {
    int NUMArray[100]  ;
     for (int i =0 ;i<100;i++){
        scanf("%d",&NUMArray[i]);
        if (NUMArray[i]== -1){
            break ;

        }
        counter++;
     }
     printf("%d %d",MaxNUm(NUMArray),MinNUM(NUMArray));

    return 0;
 }

 int MaxNUm(int ARRAY[]){
     int mx= ARRAY[0];
     for (int i =1 ; i<counter ; i++){
        if (mx<ARRAY[i]){
            mx=ARRAY[i];
        }
     }
     return mx ;
 }

 int MinNUM(int ARRAY[]){
     int mn= ARRAY[0];
     for (int i =1 ; i<counter ; i++){
        if (mn>ARRAY[i]){
            mn=ARRAY[i];
        }
     }
     return mn ;
 }
