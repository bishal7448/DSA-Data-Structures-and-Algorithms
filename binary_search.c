#include <stdio.h>

int binary_search(int array[], int start, int end, int key);          //Declaration


int main(){
  int size;          //Create an array
  printf("Enter the size of the array:");
  scanf("%d", &size);
  int array[size];
  for (int i=0; i<size; i++){
      printf("Enter %d index value:", i);
      scanf("%d", &array[i]);
  }

  int key;          //Enter the searching value
  printf("Enter the value want to find:");
  scanf("%d", &key);

  int result=binary_search(array, 1, size, key);          //Call

  printf("The searching value found at %d index position.\n", result);          //Result

  return 0;
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
