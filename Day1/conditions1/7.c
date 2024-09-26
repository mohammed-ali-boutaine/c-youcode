#include <stdio.h>

int main() {

    char caracter;
    printf("entrez u caracter :");
    scanf("%c",&caracter);


    if(caracter>=65 && caracter<=90){
        printf("majuscule");
    }else{
        printf("miniscul");
    }




    return 0;
}