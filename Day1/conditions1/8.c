#include <stdio.h>

int main() {

    int moyen;
    printf("entrez u moyen :");
    scanf("%d",&moyen);

    if(moyen<10){
        printf("recalé");

    }else if(num < 12){
        printf("passable");
    }else if(num < 14){
        printf("assez bien");
    }else if(num < 16){
        printf("bien");
    } else{
        printf("très bien");
    }

    return 0;

}