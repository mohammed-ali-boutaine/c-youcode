#include <math.h>  
#include <stdio.h>


int main() {

    double a,b,c,geometricMean;


    printf("a: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d",&b);

    printf("c: ");
    scanf("%d",&c);

    // or 
    // printf("Entrez trois nombres : ");
    // scanf("%lf %lf %lf", &a, &b, &c);



    geometricMean = pow(a*b*c, 1.0/3.0 ) ;

    printf("result: %f ",geometricMean);

    return 0;
}