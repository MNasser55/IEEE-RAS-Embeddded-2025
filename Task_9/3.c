#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void print_List(struct Node* head) {
    int i=0;
    struct Node* current = head;

    printf("Your train (linked list) has:\n");
    while (current != NULL) {
            i++;
        printf("(node%d %d) -> ",i, current->data);
        current = current->next;
    }
    printf("NULL\n");
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

int getNodeValueAtPosition(struct Node* head, int position) {
    int index = 0;
    while (head != NULL) {
        if (index == position) {
            return head->data;
        }
        head = head->next;
        index++;
    }
    printf("Position %d is out of bounds.\n", position);
    return -1;
}

void insertNodeAtPosition(struct Node** head, int value, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    int index = 0;

    while (current != NULL && index < position - 1) {
        current = current->next;
        index++;
    }
    if (current == NULL) {
        printf("Cannot insert at position %d: out of bounds.\n", position);
        free(newNode);
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
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
printf("\nThe value in node 1 is %d\n",getNodeValueAtPosition(head,0)); //like array [0] --> the first element
insertNodeAtPosition(&head,90,2);//insertNodeAtPosition(passing with reference of list,value,position)
printf("\nThe list after change node 3 to 90: \n");
print_List(head);
freeList(head);
    return 0;
}
