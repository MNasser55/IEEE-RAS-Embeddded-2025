//problem 2
#include <stdio.h>
#include <math.h>



int main() {
    int Upper, Lower;
    printf("Enter lower limit: ");
    scanf("%d", &Lower);
    printf("Enter upper limit: ");
    scanf("%d", &Upper);

    Armstrong_numbers(Lower, Upper);

    return 0;
}

void Armstrong_numbers(int x, int y) {
    int ArrayofArmstrong[80], m = 0, count = 0, arrayspe[10];

    for (int i = x; i < y; i++) {
        int temp = i ,count2 = 0, Target = 0;

            if (temp <=10&&temp!=1){//to skip the numbers between 2 to 9 ;)
                continue;
            }

        while (temp > 0) {
            arrayspe[count2] = temp % 10;
            temp /= 10;
            count2++;

        }

        for (int w = 0; w < count2; w++) {
            Target += pow(arrayspe[w], count2);
        }

        if (i == Target) {
            ArrayofArmstrong[m] = i;
            m++;
            count++;
        }
    }

    printf("Armstrong numbers between %d and %d are: ", x, y);
    for (int n = 0; n < count; n++) {
        printf("%d", ArrayofArmstrong[n]);
        if (n < count - 1) { //to don't print , with the last number;)
            printf(", ");
        }
    }
    printf(".\n");
}
