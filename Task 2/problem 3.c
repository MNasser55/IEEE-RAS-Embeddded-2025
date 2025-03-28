//PROBLEM 3
#include <stdio.h>#

int is_a_woundrfulnum(int m);
int main() {
    int x;
    scanf("%d",&x);
    is_a_woundrfulnum(x);
    if(!(is_a_woundrfulnum(x))){
        printf("NO");
    }else {
    printf("YES");
    }


    return 0;

}
int is_a_woundrfulnum(int m){
    int Array1[100],Array2[100],s=0;

    if (m%2==0){
        return 0;
    }
    while (m!=0){
         Array1[s]=(m%2);
         m/=2;s++;

    }
    for (int i=0;i<s;i++){
        Array2[i]=Array1[s-1-i];

    }
    for (int k=0;k<s;k++){
        if (Array1[k]!=Array2[k]){
            return 0;
        }


    }
return 1;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223205/submission/312630428
