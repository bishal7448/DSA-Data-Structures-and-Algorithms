#include <stdio.h>
#include <stdlib.h>

#define size 10
int stack[size];
int top=-1;

void push(){
  if (top==size-1){
    printf("The stack is overflow.\n");
  }else{
      int data;
      printf("Enter the data want to push: ");
      scanf("%d", &data);
      top++;
      stack[top]=data;
  }
}

void pop(){
  if(top==-1){
    printf("The stack is underflow.\n");
  }else{
    int backup=stack[top];
    top--;
    printf("The popped data is %d.\n", backup);
  }
}

void display(){
  if(top==-1){
    printf("The stack is underflow.\n");
  }else{
    for (int i=top; i>=0; top--){
      printf("%d", stack[i]);
    }
  }
}

int main(){
  while (1){
    char ch;
    printf("Enter your choice ('1' for push, '2' for pop, '3' for display, '4' for exit): ");
    scanf("%c", &ch);
    switch (ch) {
      case '1' :
        push();
        break;
      case '2' :
        pop();
        break;
      case '3' :
        display();
        break;
      case '4' :
        exit(0);
        break;
      default :
        printf("Enter a valid choice.\n");
    }
  }
return 0;
}
