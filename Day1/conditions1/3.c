#include <stdio.h>
#include <math.h>

int main() {

    int num1,num2;

    printf("num1: ");
    scanf("%d",&num1);
    printf("num2: ");
    scanf("%d",&num2);

    if(num1 == num2){
        int r = pow((num1+num2),3); 
        printf("les nums est edentiques ,triple: %d",r);

    }else{
        printf("la somme: %d",num1+num2);
    }

    return 0;
}