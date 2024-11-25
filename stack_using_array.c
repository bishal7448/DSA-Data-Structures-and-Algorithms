#include <stdio.h>
#include <stdlib.h>

#define size 10
int stack[size];
int top=-1;

void push();
void pop();
void display();
void peek();

int main(){
    do{
        printf("Enter 1 for push, 2 for pop, 3 for display, 4 for peek, 5 for exit.\n");
        int choice;
        printf("Enter your choice:");                    //Enter your choice
        scanf("%d", &choice);
        switch(choice){                    //Cases
            case 1:
                push();
                break;
            case 2:
                pop();
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

void push(){                    //Push some value in top of the array
    if(top==size-1){
        printf("Stack is overflow.\n");
    }else{
        int number;
        printf("Enter the number want to push:");
        scanf("%d", &number);
        top++;
        stack[top]=number;
    }
}

void pop(){                    //Pop the top value from array
    if(top==-1){
        printf("Stack is underflow.\n");
    }else{
        int backup=stack[top];
        top--;
        printf("The popped data is %d.\n", backup);
    }
}

void display(){                    //Display the present array.
    if(top==-1){
        printf("Stack is underflow.\n");
    }else{
        for (int i=top; i>=0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

void peek(){                    //Get the top value of the present array
    if(top==-1){
        printf("Stack is underflow.\n");
    }else{
        printf("The top value is %d\n", stack[top]);
    }
}
