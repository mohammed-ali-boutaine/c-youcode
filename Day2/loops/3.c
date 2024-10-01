#include <stdio.h>

int main() {


    int n,sum=0;
    do{ 
    printf("entrez un nomber: ");
    scanf("%d",&n);
    if(n<0){
        printf("error entrez un number positive\n");
    }
    }while(n<0);

    for(int i=1 ; i<=n ; i++ ){
        sum+=i;
    }

    printf("sum de %d est: %d",n,sum);

    return 0;
}