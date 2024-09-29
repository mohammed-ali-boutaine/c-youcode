#include<stdio.h>


int main(){

    int size;
    int fact;

    printf("number of elemets: ");
    scanf("%d",&size);

    printf("factor: ");
    scanf("%d",&fact);

    int arr[size];


    for(int i=0;i<size;i++){
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
        arr[i] *= fact;
    }

    for(int i=0 ; i<size;i++){
        printf("%d \n",arr[i]);
    }

    return 0;
}