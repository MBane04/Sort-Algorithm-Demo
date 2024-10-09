
//prototypes
void bubbleSort(int arr[], int n);


// Function to sort an array using bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//function to print the arrays
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

