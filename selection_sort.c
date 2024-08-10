#include <stdio.h>

void create_array(int array[], int size);
void selection_sort(int array[], int size);
void display_array(int array[], int size);

int main(){

  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];

  create_array(arr, size);
  selection_sort(arr, size);
  display_array(arr, size);

  return 0;
}


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
