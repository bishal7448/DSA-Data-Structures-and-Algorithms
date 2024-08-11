#include <stdio.h>

int min_len_of_sub_array_to_sort(int N, int A[], int B[]);

int main(){

    int T;
    scanf("%d", &T);

    while(T>0){
        
        int N;
        scanf("%d", &N);

        int A[N];
        int B[N];

        for (int i=0; i<N; i++){
            scanf("%d", &A[i]);
        }

        for (int i=0; i<N; i++){
            scanf("%d", &B[i]);
        }

        //Get result.

        int result=min_len_of_sub_array_to_sort(N, A, B);

        printf("%d\n", result);

        T--;
    }

    return 0;
}

int min_len_of_sub_array_to_sort(int N, int A[], int B[]){
    
    //Find the first and last mismatch.

    int first=-1;
    int last=-1;

    for (int i=0; i<N; i++){
        if (A[i]!=B[i]){
            if (first==-1){
                first=i;
            }
            last=i;
        }
    }

    //If the array is alreay sorted then return 0.

    if (first==-1){
        return 0;
    }

    //Return the length of sorted array.

    return last - first + 1;
}
