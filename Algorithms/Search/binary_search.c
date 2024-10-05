#include <stdio.h>
/*
    Binary search is an efficient search algorithm used with sorted arrays.
    It works by repeatedly dividing the search interval in half, comparing
    the key with the middle element, and eliminating half of the remaining 
    elements until the key is found or the search interval is empty.

    **Advantages**:
    - It is much more efficient than linear search, especially for large datasets.
    
    **Limitations**:
    - Binary search only works on sorted arrays. If the array is not sorted,
      you must sort it first, which could add overhead.

    -- Time Complexity: O(log n), where n is the number of elements in the array.
    -- Space Complexity: O(1), as it works iteratively and does not use extra memory apart from a few variables.
*/

// Binary search function
int binarySearch(int* arr, int low, int high, int key) {

    // Iterative binary search
    while (low <= high) {
        // Calculate middle index
        int mid = low + (high - low) / 2;

        // If the key is found at the mid index, return the index
        if (key == arr[mid]) {
            return mid;
        }

        // If the key is less than the mid element, search the left half
        if (key < arr[mid]) {
            high = mid - 1;
        } else {  // Otherwise, search the right half
            low = mid + 1;
        }
    }

    // If the key is not found, return -1
    return -1;
}

int main() {

    // Define a sorted array of integers
    int arr[] = {1, 2, 4, 5, 7, 9, 10, 20, 30, 40, 50, 607, 1000, 10000, 20032121};
    
    // Calculate the length of the array
    int len = sizeof(arr) / sizeof(arr[0]);

    // Define the key to search for
    int key = 607;

    // Call the binarySearch function and store the result (index)
    int i = binarySearch(arr, 0, len - 1, key);

    // If the key is not found, print "Key Not Found"
    if (i == -1) {
        printf("Key Not Found\n");
    }
    // Otherwise, print the index where the key was found
    else {
        printf("Key Found at Index: %d\n", i);
    }

    return 0;
}
