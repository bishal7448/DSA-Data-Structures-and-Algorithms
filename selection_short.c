#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort(int arr[], int size){
  int i, j, min;
  for (int i=0; i<size-1; i++){
    min=i;
    for (int j=i+1; j<size; j++){
      if (arr[j]<arr[min]){
        min=j;
      }
    }
    if (min!=i){
      swap(&arr[i], &arr[min]);
    }
  }
}

void print_array(int arr[], int size){
  for (int i=0; i<size; i++){
    printf("%d ", arr[i]);
  }
}

int main(){
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];
  for (int i=0; i<size; i++){
    printf("Enter the %d index value: ", i);
    scanf("%d", &arr[i]);
  }
  selection_sort(arr, size);
  printf("Shorted array:\n");
  print_array(arr,size);
}
