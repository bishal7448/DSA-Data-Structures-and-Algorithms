
#include <stdio.h>
#include <stdlib.h>

#define size 10
int queue[size];
int front=-1;
int rear=-1;

void enqueue(){
    if(front==-1 && rear==-1){
        front=rear=0;
        int data;
        printf("Enter the data want to insert in queue:");
        scanf("%d", &data);
        queue[rear]=data;
    }else if(front==(rear+1)%size){
        printf("Queue is overflow.\n");
    }else{
        rear=(rear+1)%size;
        int data;
        printf("Enter the data want to insert in queue:");
        scanf("%d", &data);
        queue[rear]=data;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("The queue is underflow.\n");
    }else if(front==rear){
        int backup;
        backup=queue[front];
        front=rear=-1;
        printf("The dequeue value is %d\n.", backup);
    }else{
        int backup;
        backup=queue[front];
        front=(front+1)%size;
        printf("The dequeue value is %d\n.", backup);
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("The queue is empty.\n");
    }else{
        printf("The queue:\n");
        int i=front;
        while(i!=rear){
            printf("%d\n", queue[i]);
            i=(i+1)%size;
        }
    }
}

void peek(){
    if(front==-1 && rear==-1){
        printf("The queue is empty.\n");
    }else{
        printf("Front value is %d\n", queue[front]);
    }
}

int main(){
    do{
        printf("Enter 1 for enqueue, 2 for dequeue, 3 for display, 4 for peek, 5 for exit.\n");
        int choice;
        printf("Enter your choice:");                    //Enter your choice
        scanf("%d", &choice);
        switch(choice){                    //Cases
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Enter a valid choice.\n");
        }
    }while(1);                    //Loop condition.
    return 0;
}
