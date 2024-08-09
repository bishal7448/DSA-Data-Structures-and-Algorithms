#include <stdio.h>
#include <stdlib.h>

#define size 10
int stack[size];
int top=-1;

void push(){
  if (top==size-1){
    printf("Stack is overflow.\n");
  }else{
    int data;
    printf("Enter the data want to push: ");
    scanf("%d", &data);
    top++;
    stack[top]=data;
  }
}

void pop(){
  if (top==-1){
    printf("stack is underflow.\n");
  }else{
    int backup=stack[top];
    top--;
    printf("The popped data is %d.\n", backup);
  }
}

void display(){
  if (top==-1){
    printf("The stack is underflow.\n");
  }else{
    printf("The array is:\n");
    for (int i=top; i>=0; i--){
      printf("%d\n", stack[i]);
    }
  }
}

int main(){
  do{
    printf("1 for push, 2 for pop, 3 for display, 4 exit.\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
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
        exit(0);
        break;
      default:
        printf("Enter a valid choice.\n");
    }
  }while(1);
  return 0;
}
