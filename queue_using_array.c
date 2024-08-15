#include <stdio.h>
#include <stdlib.h>

#define size 10
int queue[size];
int front=-1;
int rare=-1;

void enqueue(){
    if(front=size-1){
        printf("Queue is full.\n");
    }else if(front=-1 && rare=-1){
        front++;
        rare++;
        int data;
        printf("Enter the data want to insert in queue:");
        scanf("%d", &data);
        queue[rare]=data;
    }else{
        rare++;
        int data;
        printf("Enter the data want to insert in queue:");
        scanf("%d", &data);
        queue[rare]=data;
    }
}

void dequeue(){
    if(-1<front<size-1){
        int backup;
        backup=queue[front];
        front++;
        printf("The dequeue value is %d.\n", backup);
    }else{
        printf("The queue is empty.\n");
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
