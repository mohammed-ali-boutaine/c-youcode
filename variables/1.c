

/*

Challenge 1 : Affichage Informations
Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.
 */


 
#include <stdio.h>
#include <string.h>

int main(){

    char prenom[20];
    char nom[20];
    int age ;
    char sexe;
    char email[50];

    printf("entrez votre prenome: ");
    fgets(prenom,sizeof(prenom),stdin);

    printf("entrez votre nom: ");
    fgets(nom,sizeof(nom),stdin);

    printf("entrez votre age");
    scanf("%d",&age);

    printf("entrez votre sexe");
    scanf("%c",&sexe);

    printf("entrez votre email");
    scanf("%s",&email);




    return 0;
}