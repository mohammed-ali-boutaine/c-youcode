#include <stdio.h>

int main() {

    int score,ancie,recues;
{
    // Score de performance (de 0 à 100)
    // Ancienneté (en années)
    // Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus)


    // Score >= 90 et Ancienneté >= 5 ans : Excellente
    // Score >= 75 et Ancienneté >= 3 ans : Bonne
    // Score >= 50 et Ancienneté < 3 ans : Satisfaisante
    // Score < 50 : Insuffisante
    // Ajoutez un bonus si des récompenses ont été reçues : 10% pour une récompense, 20% pour deux ou plus.

}

    printf("Score de performance (de 0 à 100): ");
    scanf("%d",&score);

    printf("Anciennete (en annees): ");
    scanf("%d",&ancie);

    printf("Recompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus): ");
    scanf("%d",&recues);

    // score
    if (score >= 90 && ancie >= 5) {
        printf("Excellente\n");
    } else if (score >= 75 && ancie >= 3) {
        printf("Bonne\n");
    } else if (score >= 50 && ancie < 3) {
        printf("Satisfaisante\n");
    } else if (score < 50) {
        printf("Insuffisante\n");
    }
    // bonus
    if(recues>=1){
        // bonus de recues * 10 %
        printf("Bonus de %d%%",recues*10);
    }else if(recues == 0){
        // acune de bonus
        printf("no bonus");
    }else{
        printf("error");
    }

    return 0;

}