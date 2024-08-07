#include <stdio.h>
#include <stdlib.h>

#define size 10
int stack[size];
int top = -1;

void push() {
  if (top == size - 1) {
    printf("Stack is oveflow.\n");
  } else {
    int data;
    printf("Enter the data to be pushed: ");
    scanf("%d", &data);
    top++;
    stack[top] = data;
  }
}

void pop() {
  if (top == -1) {
    printf("Stack is underflow.\n");
  } else {
    int backup = stack[top];
    top--;
    printf("The popped element is %d.\n", backup);
  }
}

void display() {
  if (top == -1) {
    printf("Stack is underflow.\n");
  } else {
    for (int i = top; i >= 0; i--) {
      printf("%d\n", stack[i]);
    }
  }
}

int main() {
  do {
    int c;
    printf("Enter the choice 1 for push, 2 for pop, 3 for display, 4 for exit: ");
    scanf("%d", &c);
    switch (c) {
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
      printf("Enter a valid choiice .\n");
    }
  } while (1);
  return 0;
}
