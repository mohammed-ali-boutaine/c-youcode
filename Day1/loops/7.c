#include <stdio.h>
#include <string.h>


int main() {

{
    // Écrivez un programme C qui lit un entier à plusieurs chiffres
    //  et l'affiche en ordre inverse sans utiliser de tableaux.
    //  Par exemple, si l'entrée est 12345, affichez 54321.
}
    char n[100];
    printf("entrez un nomber: ");
    scanf("%s",n);

    int len = strlen(n);

    for(int i=strlen(n)-1 ; i >=0 ; i--){
        printf("%c",n[i]);

    }
    return 0;
}