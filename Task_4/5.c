#include <stdio.h>

// Function to calculate length of a string (like strlen)
int getStringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100] ;
     printf("Enter a string containing digits: ");
    scanf("%s", str);  // Read string from user

    int len = getStringLength(str);

    printf("Length = %d\n", len);

    return 0;
}
