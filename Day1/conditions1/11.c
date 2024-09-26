// Online C compiler to run C program online
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    srand(time(0));
    int randomNumber = rand() % 7;  

    switch(randomNumber){
        case 0:
            printf("Lundi\n");
            break;
        case 1:
            printf("Mardi\n");
            break;
        case 2:
            
            printf("Mercredi\n");
            break;
        case 3:
            printf("Jeudi\n");
            break;
        case 4:
            printf("Vendredi\n");
            break;
        case 5:
            printf("Samedi\n");
            break;
        case 6:
            printf("Dimanche\n");
            break;

    }

    return 0;
}