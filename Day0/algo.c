#include <stdio.h>
#include <stdbool.h>

// Bubble Sort function
void bubbleSort() {
    int arr[100] = {1, 4, 3, -20, 0, 100, 2312, -21342, 23};
    
    // Get length of the array
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    bool isSorted = false;

    while (!isSorted) {
        isSorted = true;

        for (int i = 0; i < arrSize - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int holder = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = holder;
                isSorted = false;  // Mark as unsorted if a swap occurs
            }
        }
    }

    // Print sorted array
    printf("Bubble Sorted array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Selection Sort function
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {  // Corrected the loop condition
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // Print sorted array
    printf("Selection Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    // Calling the bubble sort function
    bubbleSort();

    // Array for selection sort
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calling the selection sort function
    selectionSort(arr, size);

    return 0;
}
