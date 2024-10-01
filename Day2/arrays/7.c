#include<stdio.h>


int main(){


    int size;

    printf("number of elemets: ");
    scanf("%d",&size);

    int arr[size];
    int holder;

    for(int i=0;i<size;i++){
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j < size ; j++){
            if(arr[i] > arr[j]){
                holder = arr[i];
                arr[i] = arr[j];
                arr[j]=holder;
            }
            
        }
    }
    for(int i=0 ; i<size;i++){
        printf("%d \n",arr[i]);
    }

    return 0;
}