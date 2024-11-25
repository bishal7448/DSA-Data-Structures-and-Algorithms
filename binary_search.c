#include <stdio.h>

int binary_search(int array[], int start, int end, int key);      //Declaration
void bubble_sort(int array[], int size);

int main(){
  int size;          //Create an array
  printf("Enter the size of the array:");
  scanf("%d", &size);
  int array[size];
  for (int i=0; i<size; i++){
      printf("Enter %d index value:", i);
      scanf("%d", &array[i]);
  }

  bubble_sort(array, size);

  int key;          //Enter the searching value
  printf("Enter the value want to find:");
  scanf("%d", &key);

  int result=binary_search(array, 0, size, key);          //Call

  printf("The searching value found at %d index position.\n", result);          //Result

  return 0;
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

int binary_search(int array[], int start, int end, int key){          //Defination
  while(start<=end){
    int mid=start+end/2;
    if(key==array[mid]){
      return mid;
    }else if(key>array[mid]){
      start=mid+1;
    }else{
      end=mid-1;
    }
  }
  return -1;
}
