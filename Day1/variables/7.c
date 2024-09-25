#include <stdio.h>
#include <string.h>
int main() {

    int num1,num2,num3;

    printf("entrez num1: ");
    scanf("%d",&num1);

    printf("entrez num2: ");
    scanf("%d",&num2);

    printf("entrez num3: ");
    scanf("%d",&num3);

    float result = ( num1*2 + num2*3 + num3*5 ) / 10;

    printf("result: %0.2f",result);


    return 0;
}