#include <stdio.h>

int main() {


    int ageConducteur,typeVoiture , nomberAccidents;
    // Âge du conducteur (en années)
    // Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale)
    // Nombre d'accidents au cours des 5 dernières années

    // Conducteur de moins de 25 ans : Prime de base * 1.5
    // Conducteur de 25 à 65 ans : Prime de base
    // Conducteur de plus de 65 ans : Prime de base * 1.2
    // Type de voiture sportive : Prime * 2
    // Type de voiture utilitaire : Prime * 1.2
    // Type de voiture familiale : Prime * 1.1
    // Nombre d'accidents > 1 : Ajoutez 30% à la prime


    float coef=1;
    printf("age du conducteur: ");
    scanf("%d",&ageConducteur);
    printf("type de voiture  (1 pour sportive, 2 pour utilitaire, 3 pour familiale): ");
    scanf("%d",&typeVoiture);
    printf("Nombre d accidents au cours des 5 dernieres annees: ");
    scanf("%d",&nomberAccidents);

    // age du conducteur
    if(ageConducteur <25){
        coef*=1.5;
    }else if(ageConducteur>=65){
        coef=1.2;
    }

    // type de voiture
    if (typeVoiture == 1) {
        coef *= 2;  // Sportive
    } else if (typeVoiture == 2) {
        coef *= 1.2;  // Utilitaire
    } else if (typeVoiture == 3) {
        coef *= 1.1;  // Familiale
    }

    // Nombre d accidents
    if(nomberAccidents>1){
        coef += coef*30/100;
    }

    printf("Le coefficient final pour la prime d'assurance est: %.2f\n", coef);

    return 0;
}