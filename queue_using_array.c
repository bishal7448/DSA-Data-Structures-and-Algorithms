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
        printf("
        front++;
        rare++;
