
#include <stdio.h>
#include <math.h>


// fisrt chalenge:
void chalenge1(){

    
    // chalenge1:
    char nom[50];
    char prenom[50];
    int age;
    char sexe[5];
    char mail[50];


    // get prenom
    printf("votre prenom:");
    // scanf("%s",&prenom);
    fgets(prenom,sizeof(prenom),stdin);

    // get nom
    printf("votre nom:");
    fgets(nom,sizeof(nom),stdin);

    // get age
    printf("votre age:");
    scanf("%d",&age);

    // get sexe
    printf("votre sexe:");
    scanf("%s",&sexe);

    // get mail
    printf("votre mail:");
    scanf("%s",&mail);


    printf("\n-------------------------------- \n");

    printf("votre prenom: %s",prenom);
    printf("votre nom: %s",nom);
    printf("votre age: %d\n",age);
    printf("votre sexe: %s\n",sexe);
    printf("votre mail: %s\n",mail);

}

// Challenge 2: Convert Celsius to Kelvin
float celsiusToKelvin(float temp) {
    return temp + 273.15;
}

// Challenge 3: Convert kilometers to yards
float kmToYard(float distance) {
    return distance * 1093.61;
}

// chalenge 4: 
float kmToms(float v){
    return v*0.27778;
}

// chalnge 5:
char*  afficheTemperature(float temp){

    if(temp<0){
        return "Solide";
    }else if( temp<=100){
        return "Liquide";
    }else{
        return "Gaz";
    }
}

// chalnge 6:

// float calculatrice(float n1,float n2 , char op){

//     switch(op){
//         case '+':
//             return n1 + n2;
//             break;
//         case '-':
//             return n1 - n2;
//             break;
//         case '*':
//             return n1 * n2;
//             break;
//         case '/':
//             if (n2 != 0) {
//                 return n1 / n2;
//             } else {
//                 printf("Erreur: Division par zéro!\n");
//                 return 0;  // Return 0 in case of division by zero
//             }
//         default:
//             printf("Erreur: Opérateur invalide!\n");
//             return 0;

// }

// chalnge 7

float moyennePondere(int n1,int n2,int n3){

    float sum = (n1 * 2) + (n2 * 3) + (n3 * 5);

    return sum / 10;

}

// chalnge 8:

float moyenneGeometrique(int n1 , int n2 , int n3){

    //Moyenne géométrique = (a * b * c)^(1/3)

    return pow( (n1*n2*n3) , 1.0/3.0 ) ;
}

// chalnge 9:
float squaredDifference(float n1 ,float n2){
        return pow((n2-n1),2);
}
float caldulInSpace(int x1, int x2, int y1, int y2, int z1, int z2) {
    //Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)
    float num = squaredDifference(x1, x2) + squaredDifference(y1, y2) + squaredDifference(z1, z2);
    return sqrt(num);
}

// chalnge 10:
#define PI 3.141592653589793

double volumeShere( float rayon ){
    // Volume = (4/3) * π * r³
    return (4.0 / 3.0) * PI * pow(rayon,3);
}

// chalenge 11 :
float calculeSurface(float longueur,float largeur){
    return longueur*largeur ;
}

// // chalnge 12:
// void reversNumber(int num){
//   char str[4];
//   sprintf(str, "%d", num);
//     printf("%s \n",str);
//     char revrs[]="4444";
//     revrs[0]=str[3];
//     revrs[1]=str[2];
//     revrs[2]=str[1];
//     revrs[3]=str[0];
//     printf("%s \n",revrs);


// }
void inverserNombre(int num) {

    int i1 = num / 1000;
    int i2 = (num % 1000) / 100;
    int i3 = (num % 100) / 10;
    int i4 = num % 10;

    printf("%d%d%d%d",i4,i3,i2,i1);
}

// chalenge13

void toBinaireHexa(int num){

// Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
// Écrivez un programme C pour afficher la valeur équivalente en binaire et en hexadécimal. Entrez un nombre entier et affichez ses valeurs équivalentes en binaire et en hexadécimal.

}


int main(){

    inverserNombre(1234);

    // Testing Celsius to Kelvin conversion
    // float tempC = 30.0;
    // float kelvin = celsiusToKelvin(tempC);
    // printf("Temperature in Kelvin: %.2f\n", kelvin);

    // // Testing kilometers to yards conversion
    // float distanceKm = 5.0;
    // float yards = kmToYard(distanceKm);
    // printf("Distance in Yards: %.2f\n", yards);


    // float n1, n2;
    // char op;

    // printf("Entrez le premier nombre: ");
    // scanf("%f", &n1);

    // printf("Entrez le second nombre: ");
    // scanf("%f", &n2);

    // printf("Entrez l'opérateur (+, -, *, /): ");
    // scanf(" %c", &op);  // Notice the space before %c to handle newline

    // float resultat = calculatrice(n1, n2, op);
    // printf("Le résultat est: %.2f\n", resultat);


    return 0;
}