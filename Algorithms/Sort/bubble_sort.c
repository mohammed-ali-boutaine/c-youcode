#include <stdio.h>

int main() {
    
    int arr[] = {100,12,32,124,123,123,123,46345,324,2341,241,352,4,6,740,54745,570,235,235,0};

    int isSorted=0;
    int holder;
    int len = sizeof(arr) / sizeof(arr[0]);

    while(!isSorted){

        isSorted=1;
        for(int i=0;i<len-1;i++){
            if( arr[i+1] < arr[i] ){
                holder=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=holder;
                isSorted=0;
            }
        }
        
    }

        for(int i=0;i<len;i++){
             printf("%d ",arr[i]);
            }

    return 0;
}