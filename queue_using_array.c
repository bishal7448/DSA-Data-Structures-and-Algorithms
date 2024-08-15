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
