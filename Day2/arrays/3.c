#include <stdio.h>

int main(){


/*
Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers. Le programme doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.
*/
    int size;
    printf("entrez nombre d\'element: ");
    scanf("%d",&size);

    int arr[size];
    int sum=0;

    for(int i=0 ; i<size;i++){
        printf("element %d:",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }


    printf("La somme:%d",sum);


    return 0;
}