#include <stdio.h>
#include <stdlib.h>
#define MAX 5

char queue[MAX];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1 || front > rear);
}

int isFull() {
    return (rear == MAX - 1);
}

void enqueue(char value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }

    if (isEmpty()) front = 0;

    rear++;
    queue[rear] = value;
}

char dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    }

    char value = queue[front];
    front++;

    if (front > rear) front = rear = -1;

    return value;
}


char getFront() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[front];
}


char getRear() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[rear];
}

void printQueue() {
    if (isEmpty()) {
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

    printf("Front value: %c\n", getFront());
    printf("Rear value: %c\n", getRear());

    if (isEmpty()) printf("Queue is empty\n");
    else printf("Queue is not empty\n");

    if (isFull()) printf("Queue is full\n");
    else printf("Queue is not full\n");

    char removed = dequeue();
    printf("Dequeued: %c\n", removed);
    printQueue();

    return 0;
}
