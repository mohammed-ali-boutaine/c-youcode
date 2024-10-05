#include <stdio.h>
/*
    Interpolation search is an algorithm used for searching a value in a sorted array.
    It improves on binary search by estimating the position of the key based on its value 
    relative to the high and low bounds of the array. It's more efficient than binary search 
    for uniformly distributed data.

    **Advantages**:
    - Faster than binary search for uniformly distributed data.
    - Best-case time complexity is O(log log n), which is more efficient than binary search.

    **Limitations**:
    - Only works on sorted arrays.
    - Can degrade to O(n) in the worst case, especially when data is not uniformly distributed.

    -- Time Complexity:
        - Best Case: O(log log n), assuming uniform distribution of values.
        - Worst Case: O(n), if the distribution of values is highly skewed.
    -- Space Complexity: O(1) for iterative, O(log n) for recursive due to recursion stack.
*/

// Iterative Interpolation Search function
int InterpolationSearch(int* arr, int low, int high, int key) {
    // Iterative interpolation search
    while (low <= high && key >= arr[low] && key <= arr[high]) {

        // Estimate the position using interpolation formula
        int pos = low + ((key - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        // If the key is found, return the position
        if (arr[pos] == key) {
            return pos;
        }

        // If the key is smaller than the element at estimated position, search the left half
        if (arr[pos] > key) {
            high = pos - 1;
        } 
        // If the key is larger, search the right half
        else {
            low = pos + 1;
        }
    }

    // If the key is not found, return -1
    return -1;
}

// Recursive Interpolation Search function
int InterpolationSearchRecursive(int* arr, int low, int high, int key) {
    if (low <= high && key >= arr[low] && key <= arr[high]) {

        // Estimate the position using interpolation formula
        int pos = low + ((key - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        // If the key is found, return the position
        if (arr[pos] == key) {
            return pos;
        }

        // If the key is smaller, search the left sub-array
        if (arr[pos] > key) {
            return InterpolationSearchRecursive(arr, low, pos - 1, key);
        }

        // If the key is larger, search the right sub-array
        return InterpolationSearchRecursive(arr, pos + 1, high, key);
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

    // Call the iterative InterpolationSearch function
    int iterativeResult = InterpolationSearch(arr, 0, len - 1, key);

    // If the key is not found, print "Key Not Found"
    if (iterativeResult == -1) {
        printf("Key Not Found (Iterative)\n");
    }
    // Otherwise, print the index where the key was found
    else {
        printf("Key Found at Index: %d (Iterative)\n", iterativeResult);
    }

    // Call the recursive InterpolationSearch function
    int recursiveResult = InterpolationSearchRecursive(arr, 0, len - 1, key);

    // If the key is not found, print "Key Not Found"
    if (recursiveResult == -1) {
        printf("Key Not Found (Recursive)\n");
    }
    // Otherwise, print the index where the key was found
    else {
        printf("Key Found at Index: %d (Recursive)\n", recursiveResult);
    }

    return 0;
}
