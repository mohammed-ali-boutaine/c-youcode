#include <stdio.h>
#include <stdbool.h>

int main() {


{
    // Écrivez un programme C qui demande un nombre entier n et affiche les n premiers nombres pairs. Par exemple, pour n = 4, affichez : 2, 4, 6, 8.
}
    int n;
    do{ 
    printf("entrez un nomber: ");
    scanf("%d",&n);
    if(n<0){
        printf("error entrez un number positive\n");
    }
    }while(n<=0);

int i=1, counter=0;

while(true){
    if(i%2==0){
        printf("%d, ",i);
        counter++;
    }

    if(counter==n){
        break;
    }

    i++;
}


    return 0;
}