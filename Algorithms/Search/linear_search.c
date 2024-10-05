#include <stdio.h>
/*
    Linear search is a simple search algorithm that checks each element of an array
    sequentially until the desired element (the "key") is found or the array is fully traversed.

    **Advantages**:
    - It works on both sorted and unsorted arrays.
    - Simple to implement.
    - Useful for small datasets or when the dataset is unsorted.

    **Limitations**:
    - Inefficient for large datasets because it has to check each element one by one.
    - Slower compared to more efficient algorithms like binary search for large datasets.

    -- Time Complexity: O(n), where n is the number of elements in the array.
    -- Space Complexity: O(1), since it doesn't use any extra space apart from a few variables.
*/

// Linear search function
int linearSearch(int* arr, int len, int key) {
  
    for (int i = 0; i < len; i++) {
        // If the key is found, return the index
        if (arr[i] == key) 
            return i;
    }

    // If the key is not found, return -1
    return -1;
}

int main() {

    // Define an array of integers
    int arr[] = {1, 2, 4, 5, 7, 9, 10, 20, 30, 40, 50, 607, 1000, 10000, 20032121};
    
    // Calculate the number of elements in the array
    int len = sizeof(arr) / sizeof(arr[0]);
    
    // Define the key to search for
    int key = 607;

    // Call the linearSearch function and store the result (index)
    int i = linearSearch(arr, len, key);

    // If the key is not found, print "Key Not Found"
    if (i == -1)
        printf("Key Not Found\n");
    // Otherwise, print the index where the key was found
    else
        printf("Key Found at Index: %d\n", i);

    return 0;
}
