
//problem 1
#include <stdio.h>

int MaxNum(int ARRAY[]);
int MinNum(int ARRAY[]);

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
     printf("%d %d",MaxNum(NUMArray),MinNum(NUMArray));

    return 0;
 }

 int MaxNum(int ARRAY[]){
     int mx= ARRAY[0];
     for (int i =1 ; i<counter ; i++){
        if (mx<ARRAY[i]){
            mx=ARRAY[i];
        }
     }
     return mx ;
 }

 int MinNum(int ARRAY[]){
     int mn= ARRAY[0];
     for (int i =1 ; i<counter ; i++){
        if (mn>ARRAY[i]){
            mn=ARRAY[i];
        }
     }
     return mn ;
 }
