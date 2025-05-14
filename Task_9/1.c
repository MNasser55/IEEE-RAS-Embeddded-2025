#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    int count = 0,i=0;
    struct Node* current = head;

    printf("Your train (linked list) has:\n");
    while (current != NULL) {
            i++;
        printf("(node%d %d) -> ",i, current->data);
        current = current->next;
       count++;
    }
    printf("NULL\n");
    printf("Total coaches (length): %d\n", count);
}
void freeList(struct Node* head) {
    struct Node* temp=NULL;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {

    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->next =NULL;
    struct Node* newNode1 = (struct Node*)malloc(sizeof(struct Node));
    newNode1->data=20;
    newNode1->next=NULL;
    head->next = newNode1;
    struct Node* newNode2 = (struct Node*)malloc(sizeof(struct Node));
    newNode2->data=30;
    newNode2->next=NULL;
    head->next->next = newNode2;
    printList(head);
    freeList(head);

    return 0;
}
