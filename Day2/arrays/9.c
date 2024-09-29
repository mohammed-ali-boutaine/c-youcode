#include<stdio.h>


int main(){

    int size;

    printf("number of elemets: ");
    scanf("%d",&size);

    if (size <= 0) {
        printf("error\n");
        return 1; /
    }

    int arr[size];
    int holder;

    for(int i=0;i<size;i++){
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }



    for(int i=0 ; i<size/2 ; i++){

        holder = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1]=holder;
       
    }
    for(int i=0 ; i<size;i++){
        printf("%d \n",arr[i]);
    }

    return 0;
}