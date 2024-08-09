#include <stdio.h>

void selection_sort(int array[], int size);


void create_array(int array[], int size){
  for (int i=0; i<size; i++){
    printf("Enter the value of %d index position: ", i);
    scanf("%d", &array[i]);
  }
}

void selection_sort(int array[], int size){
  for (int i=0; i<size; i++){
    int min=i;
    for (int j=min+1; j<size; j++){
      if (array[min]>array[j]){
        min=j;
      }
    }
    if (min!=i){
      int temp=array[i];
      array[i]=array[min];
      array[min]=temp;
    }
  }
}

void display_array(int array[], int size){
  printf("The sorted array:\n");
  for (int i=0; i<size; i++){
    printf("%d\n", array[i]);
  }
}
