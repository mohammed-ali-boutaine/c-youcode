#include <stdio.h>

int main() {


    float temp;
    printf("entrez temperature en celsius: ");

    scanf("%f",&temp);

    if(temp>=100){
        printf("Gaz");
    }else if(temp < 0){
        printf("Solide");
    }else{
        printf("Liquide");
    }


    return 0;
}