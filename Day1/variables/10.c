#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793


int main(){

    float rayon;

    printf("rayon: ");
    scanf("%f",&rayon);

    double volume = (4.0/3.0) * PI * pow(rayon,3);

    printf("%lf",volume);


    return 0;
}