
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

    printf("entrez votre age: ");
    scanf("%d",&age);

    printf("entrez votre sexe: ");
    scanf(" %c",&sexe);

    printf("entrez votre email: ");
    scanf(" %s",&email);


    printf("\n-------------------------------- \n");

    printf("votre prenom: %s",prenom);
    printf("votre nom: %s",nom);
    printf("votre age: %d\n",age);
    printf("votre sexe: %c\n",sexe);
    printf("votre mail: %s\n",email);
    return 0;
}