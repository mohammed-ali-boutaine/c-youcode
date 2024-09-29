#include<stdio.h>


int main(){

    int size;
    printf("number of elemets: ");
    scanf("%d",&size);

    int arr[size];
    int min;


    for(int i=0;i<size;i++){
        
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);

    if(i==0){
        min=arr[i];
    }else if(arr[i]<min){
        min=arr[i];
    }

    }
    printf("Min element: %d\n", min);  // Move this outside the loop


    return 0;
}