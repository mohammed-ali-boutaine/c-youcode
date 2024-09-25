#include <stdio.h>
#include <math.h>

int main(){

    float x1,x2,y1,y2,z1,z2;

    printf("x1: ");
    scanf("%f",&x1);

    printf("x2: ");
    scanf("%f",&x2);

    printf("y1: ");
    scanf("%f",&y1);

    printf("y2: ");
    scanf("%f",&y2);

    printf("z1: ");
    scanf("%f",&z1);

    printf("z2: ");
    scanf("%f",&z2);

    float result = sqrt( pow((x2 - x1),2) + pow((y2 - y1),2) + pow((z2 -z1),2) );
    printf("%0.2f",result);

    return 0;
}