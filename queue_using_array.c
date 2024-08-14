#include <stdio.h>
#include <stdlib.h>

#define size 10
int queue[size];
int rare=-1;
int front=-1;

void enqueue(){
    if(rare==size-1){
        printf("Queue is overflow.\n");
    }else if(front==-1 && rare==-1){
        int item;
        printf("Enter value want to insert:");
        scnaf("%d", &item);
        front++;
        rare++;
        queue[rare]=item;
    }else{
        int item;
        printf("Enter value want to insert:");
        scnaf("%d", &item);
        rare+1;
        queue[rare]=item;
    }
}

void dequeue(){
    if(front==-1 && rare==-1){
        printf("Queue is empty.\n");
    }else{
        int back=queue[front];
        front--;
        printf("The dequeue value is %d.\n");
    }
}

void display(){
    if(front==-1 && rare==-1){
        printf("Queue is empty.\n");
    }else{
        printf("The array:\n");
        for(int i=0; i<size; i++){
            printf("%d", queue[i]);
        }
    }
}
        
