
#include <stdio.h>

int main() {

    char caracter;
    printf("entrez u caracter :");
    scanf("%c",&caracter);

    if(caracter>=65 && caracter<=122){

        printf("alphabets ");
        if(caracter>=65 && caracter<=90){
            printf("majuscule\n");
        }else{
            printf("miniscul\n");
        }
    }else{
        printf("non alphabets\n");
    }

    return 0;
}