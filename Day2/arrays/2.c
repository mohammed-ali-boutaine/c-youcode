#include <stdio.h>

int main(){


    int size;
    printf("entrez nombre d\'element: ");
    scanf("%d",&size);

    int arr[size];

    for(int i=0 ; i<size;i++){
        printf("element %d:",i+1);
        scanf("%d",&arr[i]);
    }


    printf("Les éléments du tableau sont :\n");
    for(int i=0 ; i<size;i++){
        printf("%d \n",arr[i]);
    }

    return 0;
}