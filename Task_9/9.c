#include <stdio.h>
#include <stdlib.h>
#define MAX 5

char queue[MAX];
int front = -1, rear = -1;

void enqueue(char value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1) front = 0;

    rear++;
    queue[rear] = value;
}

char dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }

    char value = queue[front];
    front++;
    return value;
}

void printQueue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%c ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue('A');
    enqueue('B');
    enqueue('C');

    printQueue();

    char dequeued = dequeue();
    printf("Dequeued value: %c\n", dequeued);

    printQueue();

    return 0;
}
