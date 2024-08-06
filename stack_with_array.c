#include <stdio.h>
#include <stdlib.h>

#define size 10
int stack[size];
int top=-1;

void push(){
  if (top==size-1){
    printf("Stack is overflow.\n");
  }else{
    top++;
    int data;
    printf("Enter the data you want push: ");
    scanf("%d", &data);
    stack[top]=data;
  }
}

void pop(){
  if (top==-1){
    printf("Stack is underflow.\n");
  }else{
    int backup=stack[top];
    top--;
    printf("The pop element is %d.\n", backup);
  }
}

void display(){
  if (top==-1){
    printf("Stack is underflow.\n");
  }else{
    for (int i=0; i<top; i++){
      printf("%d", stack[i]);
    }
  }
}

int main(){
  while (1){
    char ch;
    printf("Enter the choice what you want to do ('1' for push, '2' for pop, '3' for display, '4' for exit.): \n");
    scanf("%c", &ch);
    switch (ch) {
      case '1' : push();
        break;
      case '2' : pop();
        break;
      case '3' : display();
        break;
      case '4' : exit(0);
        break;
      default : 
        printf("Enter a valid choice.\n");
    }
  }
  return 0;
}
