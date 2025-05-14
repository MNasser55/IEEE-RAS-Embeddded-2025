#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int print_List(struct Node* head) {
    int i=0;
    struct Node* current = head;

    printf("Your train (circul linked list) has:\n");
    printf("(node %d) -> ", current->data);
    current = current->next;
    while (i!=7) {
            i++;
        printf("(node %d) -> ", current->data);

        current = current->next;
}
printf("etc ... \n");
}

struct Node* insertAtPosition(struct Node* head, int data, int position) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    if (position <= 1) {
        struct Node* temp = head;
        while (temp->next != head) temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
        return newNode;
    }

    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void freeList(struct Node* head) {
    struct Node* temp=NULL;
    while (head != head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {

 struct Node* head =(struct Node*)malloc(sizeof(struct Node));
head->data=10;
head->next=NULL;
 struct Node* newnode =(struct Node*)malloc(sizeof(struct Node));
newnode->data=20;
newnode->next=head;
head->next=newnode;
struct Node* newnode2 =(struct Node*)malloc(sizeof(struct Node));
newnode2->data=30;
newnode2->next=head;
newnode->next=newnode2;

    print_List(head);
    printf("\nAfter insert at the certain\n\n");
    head = insertAtPosition(head, 50, 2);
    print_List(head);
    freeList(head);

    return 0;
}
