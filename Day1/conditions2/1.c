#include <stdio.h>

int main() {


    int revenu,score,duree;
    // revenu annuel en euros
    // score de credit en annees
    // duree du pret en annees

    // Revenu >= 30 000 € et Score de crédit >= 700 et Durée du prêt <= 10 ans : Éligible
    // Revenu >= 30 000 € et Score de crédit >= 650 et Durée du prêt <= 15 ans : Éligible avec conditions
    // Revenu < 30 000 € ou Score de crédit < 650 ou Durée du prêt > 15 ans : Non éligible

    printf("revenu annuel en euros: ");
    scanf("%d",&revenu);
    printf("score de credit en annees: ");
    scanf("%d",&score);

    printf("duree du pret en annees: ");
    scanf("%d",&duree);


    if(revenu>=30000 && score>=700 && duree<=10){
        printf("Eligible");
    }else if(revenu>=30000 && score>=650 && duree<=15){

        printf("Eligible avec conditions");

    }else{
        printf("Non Eligible");

    }
    return 0;
}