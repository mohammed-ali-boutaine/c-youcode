#include <stdio.h>

int main() {

    int arr[] = {100,12,32,124,123,123,123,46345,324,2341,241,352,4,6,740,54745,570,235,235,0};
    int len = sizeof(arr) / sizeof(arr[0]);
    //int holder;



    int min=arr[0];
    int minIdex=0;
    for(int i=0 ; i< len ; i++){

        if(arr[i+1] < arr[i]){
            min = arr[i];
            minIdex = i;

            for(int j = minIdex ; j < i ; j++){
                arr[j]=arr[j-1];
            }
            //arr[minIdex]=min;
            arr[minIdex]=arr[i];

        }

    }



    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
