
#include <stdio.h>

int main(){

    float distance;

    printf("enter la la distance en kilomètres: ");
    scanf("%f",&distance);

    float yard = distance * 1093.61;

    printf("%0.3fkm = %0.3f yards",distance,yard);



    return 0;
}