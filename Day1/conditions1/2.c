#include <stdio.h>

int main() {


    char caractere;
    printf("entrez un caracter: ");
    scanf("%c",&caractere);

    if(
        caractere == 'a' || caractere == 'e' || caractere == 'u' ||
        caractere == 'i' || caractere == 'y' || caractere == 'o' ||
        caractere == 'A' || caractere == 'E' || caractere == 'U' ||
        caractere == 'I' || caractere == 'Y' || caractere == 'O' 
    ){
        printf("voyelle");
    }else{
        printf("Non voyelle");

    }


    return 0;
}