#include <stdio.h>
#include <stdlib.h>
/**
Made by Caden Henderson 
7/7/2023

Lab #7 of CS1
*/


//x is index of term 1
//y is index of term 2
void swap(int* arr, int x, int y){
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}

//n is length
void bubbleSort(int* arr, int n){
    //initialize swap counter
    int swaps = 0;
    
    for(int i = 0; i < n-1; i++){

        for(int j = 0; j < n - i -1; j++){
            if(arr[j+1] < arr[j]) {
                swap(arr, j, j+1);
                swaps++;
            }
        }
        printf("Swaps for term %d: %d\n", i, swaps);

        //reset swaps 
        swaps = 0;
    }
    //print for final term
    printf("Swaps for term %d: %d\n", n-1, swaps);
}

//helper function
void printArray(int* arr, int n){
    printf("{");
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
        if(i != n -1){
            printf(", ");
        }else{
            printf("}");
        }
    }
}

//drive program
int main(){
    //initialize array
    int SIZE = 9;
    int* arr = (int*)malloc(sizeof(int)*SIZE);
    arr[0] = 97;
    arr[1] = 16;
    arr[2] = 45;
    arr[3] = 63;
    arr[4] = 13;
    arr[5] = 22;
    arr[6] = 7;
    arr[7] = 58;
    arr[8] = 72;
    
    printf("Before:\n");
    printArray(arr, SIZE);
    printf("\n\n");

    //bubble sort
    bubbleSort(arr, SIZE);

    printf("\nAfter:\n");
    printArray(arr, SIZE);

    return 0;
}