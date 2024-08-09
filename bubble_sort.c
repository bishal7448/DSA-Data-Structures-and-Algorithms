#include <stdio.h>

void create_array(int array[], int size);
void bubble_sort(int array[], int size);
void display_array(int array[], int size);

int main(){

  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];

  create_array(arr, size);
  bubble_sort(arr, size);
  display_array(arr, size);

return 0;
}

void create_array(int array[], int size){
  for (int i=0; i<size; i++){
    printf("Enter the value of %d index position: ", i);
    scanf("%d", &array[i]);
  }
}

void bubble_sort(int array[], int size){
  for (int i=0; i<size; i++){
    for (int j=i+1; j<size; j++){
      if (array[i]>array[j]){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      }
    }
  }
}

void display_array(int array[], int size){
  printf("The sorted array:\n");
  for (int i=0; i<size; i++){
    printf("%d\n", array[i]);
  }
}
