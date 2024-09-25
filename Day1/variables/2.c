
#include <stdio.h>

int main(){

    float temperature;

    printf("enter la temperature en cesius: ");
    scanf("%f",&temperature);

    float kelvin = temperature + 273.15;

    printf("%0.2f cesios = %0.2f kelvin",temperature,kelvin);



    return 0;
}