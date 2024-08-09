#include <stdio.h>

void selection_sort(int array[], int size);



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
