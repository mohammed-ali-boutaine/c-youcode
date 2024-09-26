#include <stdio.h>


int main(){

    int num;
    printf("entrez un num: ");
    scanf("%d",&num);

    if(num%2== 0){
        printf("pair");
    }else{
        printf("Impaire");
    }

    return 0;
}