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
    printf("(node%d %d) -> ",i, current->data);
    current = current->next;
    while (i!=7) {
            i++;
        printf("(node%d %d) -> ",i, current->data);

        current = current->next;
}
printf("etc ... \n");
}
void ins_atbeg(struct Node** head,int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=*head;
newnode->data=value;
newnode->next=*head;
while (temp->next!=*head){
    temp=temp->next;        //to reach to the last node
}

temp->next=newnode;
*head=newnode;
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
    printf("\nAfter insert at the beginning\n\n");
    ins_atbeg(&head,0);
    print_List(head);
    freeList(head);

    return 0;
}
