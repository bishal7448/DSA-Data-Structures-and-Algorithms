#include <stdio.h>

int selection_short(int array, int size){
  for (int i=0; i<size-2; i++){
    int min=i;
    for (int j=i+1; j<size-2; j++){
      if (array[min]<array[j]{
        min=j;
      }
    }
  int temp=array[i];
  array[i]=array[j];
  array[j]=temp;
  }
}

