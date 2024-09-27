#include <stdio.h>
#include <stdbool.h>

int main() {


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
    if(i%2==1){
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