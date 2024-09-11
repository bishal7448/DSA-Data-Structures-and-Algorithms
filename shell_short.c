#include <stdio.h>

void create_array(int array[], int size);
void shell_sort(int arr[], int size);
void display_array(int array[], int size);

int main() {
  int size;
  printf("Enter the size of the array:");
  scanf("%d", &size);
  int arr[size];

  create_array(arr, size);
  shell_sort(arr, size);
  display_array(arr, size);

  return 0;
}

void create_array(int array[], int size){
  for (int i=0; i<size; i++){
    printf("Enter the value of %d index position:", i);
    scanf("%d", &array[i]);
  }
}

void shell_sort(int arr[], int size){
    int i, j, gap;
    for(gap=size/2; gap>=1; gap/=2){
        for(j=gap; j<size; j++){
            for(i=j-gap; i>=0; i-=gap){
                if(arr[i+gap]>arr[i]){
                    break;
                }else{
                    int temp=arr[i+gap];
                    arr[i+gap]=arr[i];
                    arr[i]=temp;
                }
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