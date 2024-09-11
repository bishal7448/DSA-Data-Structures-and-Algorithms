#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_at_beg();
void insert_at_end();
void insert_at_pos();
void delete_at_beg();
void delete_at_end();
void delete_at_pos();

struct node{    // Defining the structure for a linked list node
    int data;
    struct node * next;
};

struct node * head=NULL;

int main(){
    int choice;
    while(1){
        printf("Linked list operations:");
        printf("\n1 for create node\n2 for display\n3 for insert at begining\n4 for insert at ending\n5 for insert at position\n6 for delete at begining\n7 for delete at ending\n8 for delete at position\n9 for exit.\n");
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
            case 6:delete_at_beg();
                break;
            case 7:delete_at_end();
                break;
            case 8:delete_at_pos();
                break;
            case 9:exit(0);
                break;
            default:
                printf("Enter a correct choice.\n");
        }
    }
    return 0;
}

void create(){
    struct node * new_node;    // Create a new node
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data:");
    scanf("%d", &new_node->data);
    
    new_node->next=NULL;
    
    if(head==NULL){
        head=new_node;
    }else{
        struct node * temp;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}

void display(){     //Display
    struct node * temp=head;
    while(temp!=NULL){
        printf("The nodes data:");
        printf("%d\n", temp->data);
        temp=temp->next;
    }
}

void insert_at_beg(){
    struct node * new_node;
    new_node=(struct node*)malloc(sizeof(struct node));

    printf("Enter node data at begining:");
    scanf("%d", &new_node->data);

    new_node->next=head;
    head=new_node;
}

void insert_at_end(){
    struct node * new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data at end:");
    scanf("%d", &new_node->data);
    
    new_node->next=NULL;
    struct node * temp;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void insert_at_pos(){
    struct node * new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data at end:");
    scanf("%d", &new_node->data);
    
    new_node->next=NULL;
    struct node *temp=head;
    struct node *prev_temp;
    int pos;
    printf("Enter position:");
    scanf("%d", &pos);
    
    for(int i=1; i<=pos; i++){
        prev_temp=new_node;
        new_node=new_node->next;
    }
    new_node->next=temp;
    prev_temp->next=new_node;
}

void delete_at_beg(){
    if(head==NULL){
        printf("Linked list is empty.");
    }else{
        struct node * temp;
        head=head->next;
        free(temp);
    }
}

void delete_at_end(){
    if(head==NULL){
        printf("Linked list is empty.");
    }else{
        if(head->next==NULL){
            struct node * temp;
            head=head->next;
            free(temp);
        }else{
            struct node * temp=head;
            struct node * prev_temp;
            prev_temp=NULL;
            while(temp->next!=NULL){
                prev_temp=temp;
                temp=temp->next;
            }
            prev_temp->next=NULL;
            free(temp);
        }
    }
}

void delete_at_pos(){
    int pos;
    printf("Enter position:");
    scanf("%d", &pos);
    struct node * temp=head;
    struct node *prev_temp;
    if(head==NULL){
        printf("Linked list is empty.");
    }else{
        for(int i=1; i<=pos; i++){
            prev_temp=temp;
            temp=temp->next;
        }
    }
}