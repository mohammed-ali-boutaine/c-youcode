#include <stdio.h>

int main(){

    float longueur,largeur;

    printf("longueur: ");
    scanf("%f",&longueur);

    printf("largeur: ");
    scanf("%f",&largeur);

    float surface = longueur * largeur;
    printf("result: %0.2f",surface);

    return 0;
}