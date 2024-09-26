#include <stdio.h>

int main() {

    int num;
    printf("entrez u number :");
    scanf("%d",&num);

    if(num<0){
        printf("negative");

    }else if(num>0){
        printf("positive");
    }else{
        printf("null");
    }


    return 0;
}