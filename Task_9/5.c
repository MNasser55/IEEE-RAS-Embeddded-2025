#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct node* pre;
    int data;
    struct Node* next;
};

int print_List(struct Node* head) {
    int i=0;
    struct Node* current = head;

    printf("Your train (Double linked list) has:\n");
    while (current != NULL) {
            i++;
            if(current->next==NULL){
        printf("(node%d %d)  ",i, current->data);
        }else{
        printf("(node%d %d) <-> ",i, current->data);
        }
        current = current->next;
    }
    printf("\n");

}
void ins_atbeg(struct Node** head,int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->pre=NULL;
newnode->data=value;
newnode->next=*head;
*head=newnode;

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

 struct Node* head =(struct Node*)malloc(sizeof(struct Node));
head->pre=NULL;
head->data=10;
head->next=NULL;
 struct Node* newnode =(struct Node*)malloc(sizeof(struct Node));
newnode->pre=head;
newnode->data=20;
newnode->next=NULL;
head->next=newnode;
struct Node* newnode2 =(struct Node*)malloc(sizeof(struct Node));
newnode2->pre=newnode;
newnode2->data=30;
newnode2->next=NULL;
newnode->next=newnode2;

    print_List(head);
    printf("\nAfter insert at the beginning\n");
    ins_atbeg(&head,0);
    print_List(head);
    freeList(head);

    return 0;
}
