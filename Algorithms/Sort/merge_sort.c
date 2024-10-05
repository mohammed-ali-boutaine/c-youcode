#include <stdio.h>

int main() {

    int arr[] = {100,12,32,124,123,123,123,46345,324,2341,0,241,352,4,6,740,54745,570,235,235};
    int len = sizeof(arr) / sizeof(arr[0]);
    int holder;


    void mergeSort(int arr[]){

    int len = sizeof(arr) / sizeof(arr[0]);
    if(len>2){
        
        mergeSort(arr)
    }




    }
    // for(int i=0 ; i< len-1 ; i++){



    // }

        // if(arr[i+1] < arr[i]){

        //         for(int j = i+1 ; j > 0 ; j--){

        //             if(arr[j]<arr[j-1]){

        //                 holder=arr[j];
        //                 arr[j]=arr[j-1];
        //                 arr[j-1] = holder;

        //             }else{
        //                 break;
        //             }
        //         }
        //     }

    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
