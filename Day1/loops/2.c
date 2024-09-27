#include <stdio.h>

int main() {

    int n,f=1;

    do{ 
    printf("entrez un nomber: ");
    scanf("%d",&n);
    if(n<0){
        printf("error entrez un number positive\n");
    }
    }while(n<0);

    if(n==0 || n==1){
        printf("factoriel de %d est 1.\n",n);
        return 0;
    }


    for(int i=1 ; i <= n ; i++){
        f*=i;
    }
    printf("factoriel de %d est %d.\n",n,f);
    return 0;
}