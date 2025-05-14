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
void print(){
if (top==-1){
    printf("the stack is empty");
    exit(1);
}
for (int i=top;i>=0;i--){
    printf("%d ",stack[i]);
}
printf("\n");
}
void swap (){
int x,y;
if (top < 1) {
        printf("Not enough elements to swap.\n");
        return;
    }
x=pop();
y=pop();
push(x);
push(y);
}
int main() {
    push(10);
    push(20);
    push(30);

    int data = pop();
    printf("Popped value: %d\n", data); // Should print 30
    print();
    swap();
    print();
    return 0;
}
