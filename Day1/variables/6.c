#include <stdio.h>

int main() {

    float num1,num2;
    char op ;
    float r;

    printf("entrez num1: ");
    scanf("%f",&num1);

    printf("entrez num2: ");
    scanf("%f",&num2);

    printf("entrez operation: ");
    scanf("\n%c",&op);// \n to ignorethe white space


/* 
    printf("%f + %f = %f\n", num1, num2, num1 + num2);
    printf("%f - %f = %f\n", num1, num2, num1 - num2);
    printf("%f x %f = %f\n", num1, num2, num1 * num2);
    printf("%f / %f = %f\n", num1, num2, num1 / num2);
*/

    switch(op){
        case '+':
            r = num1+num2;
            printf("result: %0.2f",r );

            break;
        case '-':
            r = num1-num2;
            printf("result: %0.2f",r );
            break;
        case 'x':
            r = num1*num2;
            printf("result: %0.2f",r );
            break;
        case '*':
            r = num1*num2;
            printf("result: %0.2f",r );
            break;
        case '/':
            if(num2==0){
                printf("Erreur: Division par zéro\n");
                break;
            }
            r = num1/num2;
            printf("result: %0.2f",r );

            break;
        default:
            printf("Opérateur invalide\n");
            break;        

    }

    return 0;
}