#include <stdio.h>

void create_array(int array[], int size);
void insertion_sort(int array[], int size);
void display_array(int array[], int size);

int main(){

  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];

  create_array(arr, size);
  insertion_sort(arr, size);
  display_array(arr, size);

  return 0;
}


void create_array(int array[], int size){
  for (int i=0; i<size; i++){
    printf("Enter the value of %d index position: ", i);
    scanf("%d", &array[i]);
  }
}

void insertion_sort(int array[], int size){      //1st Method.
  for (int i=1; i<size; i++){
    int temp=array[i];
    int j=i-1;
    while(j>=0 && array[j]>temp){
      array[j+1]=array[j];
      array[j]=temp;
      j--;
    }
  }
}

void insertion_sort(int array[], int size){     //2nd Method.
  for (int i=1; i<size; i++){
    int temp=array[i];
    int hole=i;
    while(hole>0 && array[hole-1]>array[hole]){
      array[hole]=array[hole-1];
      array[hole-1]=temp;
      hole--;
    }
  }
}

void display_array(int array[], int size){
  printf("The sorted array:\n");
  for (int i=0; i<size; i++){
    printf("%d\n", array[i]);
  }
}
