#include <stdio.h>
#include "sorting.h"

int main()
{   
    //intialize the array
    int arr[] = {74, 31, 27, 19, 22, 11, 90};

    //get the size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted array: \n");
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    
    return 0;
}