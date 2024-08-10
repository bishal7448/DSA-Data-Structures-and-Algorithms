#include <stdio.h>

int factorial(int n);

int main(){
  int n;
  printf("Enter the number want to get factorial: ");
  scanf("%d", &n);
  int fact=factorial(n);
  printf("The factorial of %d is %d.", n, fact);
}

int factorial(int n){
  if (n==0){
    return 1;
  }else{
    return n*factorial(n-1);
  }
}
