#include <stdio.h>

int main() {


    int joursCongeAccordes , joursCongeUtilises,status;


// Nombre total de jours de congés accordés
// Nombre de jours de congés utilisés
// Statut de l'employé (0 pour temps partiel, 1 pour temps plein)

// Temps plein : Jours restants = Jours accordés - Jours utilisés
// Temps partiel : Jours restants = (Jours accordés / 2) - Jours utilisés
// Si les jours utilisés dépassent les jours accordés, affichez un message d'alerte.

    printf("Nombre total de jours de conges accordes: ");
    scanf("%d",&joursCongeAccordes);

    printf("Nombre de jours de congés utilises: ");
    scanf("%d",&joursCongeUtilises);

    printf("Statut de l employe (0 pour temps partiel, 1 pour temps plein): ");
    scanf("%d",&status);

    float joursRestants;

    if(joursCongeUtilises > joursCongeAccordes){
        printf("Alerte: Vous dépassez les jours accordés !\n");
    
    }else{
        
       if (status == 1) {
            joursRestants = joursCongeAccordes - joursCongeUtilises; // Temps plein
        } else if (status == 0) {
            joursRestants = (joursCongeAccordes / 2.0) - joursCongeUtilises; // Temps partiel
        } else {
            printf("Statut invalide. Veuillez entrer 0 pour temps partiel ou 1 pour temps plein.\n");
            return 1; 
        }
        printf("Les jours de congés restants: %.1f\n", joursRestants);

    }




    return 0;
}