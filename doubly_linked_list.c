#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_at_beg();
void insert_at_end();
void insert_at_pos();
// void delete_at_beg();
// void delete_at_end();
// void delete_at_pos();

struct node{    // Defining the structure for a linked list node
    int data;
    struct node * prev;
    struct node * next;
};

struct node * head=NULL;

int main(){
    int choice;
    while(1){
        printf("Linked list operations:");
        printf("\n1 for create node.\n2 for display.\n3 for insert at begining.\n4 for insert at ending.\n5 for insert at position.\n6 for delete at begining.\n7 for delete at ending.\n8 for delete at position.\n9 for exit.\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1:create();
                break;
            case 2:display();
                break;
            case 3:insert_at_beg();
                break;
            case 4:insert_at_end();
                break;
            case 5:insert_at_pos();
                break;
            // case 6:delete_at_beg();
            //     break;
            // case 7:delete_at_end();
            //     break;
            // case 8:delete_at_pos();
            //     break;
            case 9:exit(0);
                break;
            default:
                printf("Enter a correct choice.\n");
        }
    }
    return 0;
}

void create(){
    struct node * ptr, * temp;      // Create a new node
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data:");
    scanf("%d", &ptr->data);
    
    ptr->prev=ptr->next=0;

    if(head==NULL){
        head=temp=ptr;
    }else{
        temp->next = ptr;
        ptr->prev = temp;
    }
}

void display(){
    struct node *ptr;
    ptr = head;
    printf("The nodes data:");
    while(ptr!=NULL){
        printf("%d", &ptr->data);
        ptr = ptr->next;
    }
}

void insert_at_beg(){
    struct node *ptr;
    ptr = (struct node *)malloc(size of(struct node));
    printf("Enter node data:");
    scanf("%d", &ptr->data);
    ptr->prev = ptr->next = NULL;
    if(head==NULL){
        head=ptr;
    }else{
        ptr->prev=NULL;
        ptr->next=head;
        head->prev=ptr;
        head=ptr;
    }
}

void insert_at_end(){
    struct node *ptr, *temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data:");
    scanf("%d", &ptr->data);
    ptr->prev=ptr->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;
    ptr->next=NULL;
}

void insert_at_pos(){
    int pos, i;
    printf("Enter position:");
    scanf("%d", &ptr->data);
    ptr->prev= ptr->next-NULL;
    temp=head;
    for(i=0; i<pos; i++){
        temp=temp->next;
    }
    ptr->next=temp->next;
    ptr->prev=temp;
    temp->next->prev=ptr;
    temp->next=ptr;
}

void delete_at_beg(){
    struct node *ptr =head;
    if(head==NULL){
        printf("Linked list is empty:");
    }else{
        head=head->next;
        head->prev=NULL;
        free(ptr);
    }
}

void delete_at_end(){
    struct node *ptr = head;
    if(head==NULL){
        printf("Linked list is empty:");
    }else{
        if(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        free(ptr);
    }
}

void delete_at_pos{
    int pos, i;
    printf("Enter position:");
    scanf("%d", &pos);
    struct node *ptr=head;
    if(head==NULL){
        printf("Linked list is empty:");
    }else{
        for(i=0; i<pos; i++){
            ptr=ptr->next;
        }
        ptr->next->prev=ptr->prev;
        ptr->prev->next=ptr->next;
    }
}