#include <stdio.h>

int main() {

    float consomation,prix; 

    int typeUser,typeContra;
{
    //Consommation d'électricité (en kWh)
    // Type d'utilisateur (1 pour résidentiel, 2 pour commercial)
    // Type de contrat (0 pour standard, 1 pour réduit)

// Les tarifs sont :
    // Résidentiel : 0,20 €/kWh pour contrat standard, 0,15 €/kWh pour contrat réduit
    // Commercial : 0,30 €/kWh pour contrat standard, 0,25 €/kWh pour contrat réduit
    // Ajoutez un supplément de 10% si la consommation dépasse 500 kWh.

}

    printf("Consommation d'electricite (en kWh): ");
    scanf("%f",&consomation);

    printf("Type d'utilisateur (1 pour residentiel, 2 pour commercial): ");
    scanf("%d",&typeUser);

    printf("Type de contrat (0 pour standard, 1 pour réduit): ");
    scanf("%d",&typeContra);


   // Valider les inputs
    if ((typeContra != 0 && typeContra != 1) || (typeUser != 1 && typeUser != 2) || consomation < 0.0) {
        printf("Information invalide\n");
        return 0;
    }

// traifs
    if(typeUser == 1){

        if(typeContra==0){
            prix = consomation *0.20;

        }else{
            prix = consomation *0.15;

        }

    }else{
        if(typeContra==0){
            prix = consomation *0.30;

        }else{
            prix = consomation *0.25;

        }

    }

    if(consomation>500){
        prix += prix*0.10 ;
    }

    printf("prix: %f.2$/kWh",prix);




    return 0;
}