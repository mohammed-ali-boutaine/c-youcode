#include <stdio.h>

int main(){


    int size;
    printf("entrez nombre d\'element: ");
    scanf("%d",&size);

    int arr[size];
    int max;

    for(int i=0 ; i<size;i++){

        printf("element %d:",i+1);
        scanf("%d",&arr[i]);

        if (i == 0) {
            max = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }


    printf("Le plus grand element : %d\n", max);


    return 0;
}