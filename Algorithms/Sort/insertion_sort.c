#include <stdio.h>

int main() {

    int arr[] = {100,12,32,124,123,123,123,46345,324,2341,0,241,352,4,6,740,54745,570,235,235};
    int len = sizeof(arr) / sizeof(arr[0]);
    int holder;


    for (int i = 1; i < len; i++) {
        int holder = arr[i]; // Store the current element to be positioned
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than holder to one position ahead
        while (j >= 0 && arr[j] > holder) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = holder; // Place the holder in its correct position
    }





    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
