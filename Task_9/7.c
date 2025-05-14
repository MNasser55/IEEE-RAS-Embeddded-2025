#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = value;
}

int pop() {
    int value;
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    value=stack[top];
    top--;
    return value;
}

int main() {
    push(1);
    push(2);
    push(3);

    int data = pop();
    printf("Popped value: %d\n", data); // Should print 3

    return 0;
}
