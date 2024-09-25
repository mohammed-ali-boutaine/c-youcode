// Online C compiler to run C program online
#include <stdio.h>

int main() {

    float v ;
    printf("vitesse: ");
    scanf("%f",&v);

    float ms = v * 0.27778;

    printf(" %0.2f k/m = %0.2f m/s",v,ms);


    return 0;
}