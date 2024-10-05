#include <stdio.h>
/*
    Interpolation search is an algorithm used for searching a value in a sorted array.
    It improves on binary search by trying to estimate the position of the key 
    based on the value being searched for, assuming a uniform distribution of data.

    It works by calculating the "position" based on the value of the key and the range of values 
    in the array, rather than splitting the search space in half like binary search.

    **Advantages**:
    - Faster than binary search when the elements are uniformly distributed.
    - Potentially O(log log n) in the best case for uniformly distributed data.

    **Limitations**:
    - Can be inefficient and even O(n) in the worst case when the distribution of data is skewed.
    - Only works on sorted arrays.

    -- Time Complexity:
        - Best Case: O(log log n), assuming uniform distribution of values.
        - Worst Case: O(n), if the distribution of values is highly skewed.
    -- Space Complexity: O(1), since it doesn't use extra space apart from variables.
*/

// Interpolation Search function
int InterpolationSearch(int* arr, int low, int high, int key) {

    // Iterative interpolation search
    while (low <= high && key >= arr[low] && key <= arr[high]) {

        // Estimate the position using interpolation formula
        int pos = low + ( (key - arr[low]) * (high - low) ) / (arr[high] - arr[low]);

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

int main() {

    // Define a sorted array of integers
    int arr[] = {1, 2, 4, 5, 7, 9, 10, 20, 30, 40, 50, 607, 1000, 10000, 20032121};
    
    // Calculate the length of the array
    int len = sizeof(arr) / sizeof(arr[0]);

    // Define the key to search for
    int key = 607;

    // Call the InterpolationSearch function and store the result (index)
    int i = InterpolationSearch(arr, 0, len - 1, key);

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









int interpolationSearch2(int arr[], int lo, int hi, int x)
{
    int pos;
    if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
        // Probing the position with keeping
        // uniform distribution in mind.
        pos = lo
              + (((double)(hi - lo) / (arr[hi] - arr[lo]))
                 * (x - arr[lo]));
 
        // Condition of target found
        if (arr[pos] == x)
            return pos;
 
        // If x is larger, x is in right sub array
        if (arr[pos] < x)
            return interpolationSearch(arr, pos + 1, hi, x);
 
        // If x is smaller, x is in left sub array
        if (arr[pos] > x)
            return interpolationSearch(arr, lo, pos - 1, x);
    }
    return -1;
}