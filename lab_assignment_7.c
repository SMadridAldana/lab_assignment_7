#include <stdio.h>
#include <stdlib.h>

int swap(int *firstIndex, int *secondIndex){
    int temp = *firstIndex;
    *firstIndex = *secondIndex;
    *secondIndex = temp; 
}

void PrintArray(int *myArray, int arraySize){
    printf("My array: ");
    for(int i = 0; i < arraySize; i++){
        printf("%i ", myArray[i]);
    }
    printf("\n");
}

int BoobleSortCounter(int *myArray, int arraySize){
    int counter;
    printf("Swaps per iteration: ");
    
    for(int i = 0; i < arraySize; i++){
        counter = 0;
        for(int j = 1; j < arraySize; j++){
            if(myArray[j-1]>myArray[j]){
                swap(&myArray[j-1], &myArray[j]);
                counter++;
            } 
        }
        printf("%i->%i ", i+1, counter);
    }
    printf("\n");
}

void main(){
    int myArray[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    PrintArray(myArray, 9);
    BoobleSortCounter(myArray, 9);
    PrintArray(myArray, 9);
}

