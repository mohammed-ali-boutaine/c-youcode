#include<stdio.h>


int main(){

    int size;

    printf("number of elemets: ");
    scanf("%d",&size);

    int arr[size];
    int arr2[size];
    int holder;

    for(int i=0;i<size;i++){
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i =0;i < size;i++){
        arr2[i]=arr[i];
    }

    printf("original :\n");
    for(int i=0 ; i<size;i++){
        printf("%d \n",arr[i]);
    }
    printf("copy :\n");
    for(int i=0 ; i<size;i++){
        printf("%d \n",arr2[i]);
    }

    return 0;
}