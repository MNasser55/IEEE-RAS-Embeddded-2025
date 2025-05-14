#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int print_List(struct Node* head) {
    int i=0;
    struct Node* current = head;

    printf("Your train (linked list) has:\n");
    while (current != NULL) {
            i++;
            if(current->next==NULL){
        printf("(node%d %d)  ",i, current->data);
        }else{
        printf("(node%d %d) -> ",i, current->data);
        }
        current = current->next;
    }
    printf("\n");

}

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void reverseList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
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

 struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    print_List(head);
    printf("\nAfter Reverse:\n\n");
    reverseList(&head);
    print_List(head);
    freeList(head);

    return 0;
}
