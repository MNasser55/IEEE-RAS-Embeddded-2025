#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void get_length (struct Node* x){
int counter=0;
struct Node* current=x;
 while (current != NULL) {
        current = current->next;
       counter++;
    }
printf("The length is: %d\n",counter);

}

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

void Insert_At_The_Beginning(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void Insert_At_The_End(struct Node** head, int value) {
    struct Node* newnode = createNode(value);
    newnode->data = value;
    newnode->next = NULL;
    if (*head == NULL) {
        *head = newnode;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newnode;
}

void deleteNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("Node with value %d deleted from beginning.\n", value);
        return;
    }

 while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in list.\n", value);
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("\nNode with value %d deleted.\n\n", value);
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

    printf("The list before adding :\n");
    print_List(head);
    get_length(head);
    Insert_At_The_End(&head,50);
    printf("\nThe list After adding at the end :\n");
    print_List(head);
    get_length(head);
    printf("\nThe list After adding at the beginning :\n");
    Insert_At_The_Beginning(&head,0);
    print_List(head);
    get_length(head);
    deleteNode(&head, 20);
    print_List(head);
    get_length(head);
    freeList(head);

    return 0;
}
