#include <stdio.h>

int main() {

    float budget; 
    int destination,nombrePersonnes;
{
    // Budget (en euros)
    // Destination (1 pour plage, 2 pour montagne, 3 pour ville)
    // Nombre de personnes

// Les recommandations sont :
    // Budget >= 1000 € : Voyage haut de gamme
    // Budget entre 500 € et 1000 € : Voyage moyen
    // Budget < 500 € : Voyage économique


// Les destinations recommandées sont :
    // Plage pour un budget >= 1000 € et > 2 personnes
    // Montagne pour un budget >= 500 € et <= 2 personnes
    // Ville pour tout budget et nombre de personnes


}

    printf("Budget (en euros): ");
    scanf("%f",&budget);

    printf("Destination (1 pour plage, 2 pour montagne, 3 pour ville): ");
    scanf("%d",&destination);

    printf("Recompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus): ");
    scanf("%d",&nombrePersonnes);

    // recommandations
    if(budget<=0){  // if budge <=0 show a message and exit the program
        printf("stay home\n");
        return 0;
    }

    if(budget<500){
        printf("Voyage économique\n");
    }else if( budget<1000){
        printf("Voyage moyen\n");
    }else{
        printf("Voyage haut de gamme"\n);
    }

    // Les destinations recommandées sont :

    if( budget>= 1000 && nombrePersonnes>2 ){
        if(destination ==1 ){
            printf("votre Destination est bien");
        }else{
            printf("best destination est plage");
        }
    }else if(budget>=500 && nombrePersonnes<=2){
        if(destination == 2){
            printf("votre Destination est bien");

        }else{
            printf("best destination est montagne");

        }
    }else{
        if(destination == 3){
            printf("votre Destination est bien");

        }else{
            printf("best destination est ville");

        } 
    }




    return 0;
}