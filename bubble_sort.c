#include <stdio.h>

int create_array(int array[], int size);
int bubble_sort(int array[], int size);
int display_array(int array[], int size);

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

int create_array(int array[], int size){
  for (int i=0; i<size; i++){
    printf("Enter the %d index valude: ", i);
    scanf("%d", &array[i]);
  }
}

int bubble_sort(int array[], int size){
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

int display_array(int array[], int size){
  for (int i=0; i<size; i++){
    printf("%d\n", array[i]);
  }
}
