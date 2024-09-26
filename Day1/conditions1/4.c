#include <stdio.h>
#include <math.h>

int main() {



    int a,b,c;
    float delta;

    printf("ax^2 +bx + c = 0\n");
    printf("a: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d",&b);

    printf("c: ");
    scanf("%d",&c);

    // formule de delta:
    delta = pow(b,2) -4*a*c;

    if(delta <0){
        printf("n'a pas de solution reelle.\n");
        printf("les solutions sont imaginaires:\n");

        delta = -delta;

        // Calcul des solutions imaginaires
        float realPart = -b / (2.0 * a);  // Partie réelle
        float imagPart = sqrt(delta) / (2.0 * a);  // Partie imaginaire

        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imagPart);

        
    }else if(delta == 0){
        float x0 = -b / (2.0 * a);
        printf("une unique solution: %.2f\n",x0);
        
    }else{
        printf("deux solutions distinctes :\n");
        float x1 = (-b - sqrt(delta) ) / (2.0*a); 
        float x2 = (-b + sqrt(delta) ) / (2.0*a); 
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n",x2);
    }

    return 0;
}
