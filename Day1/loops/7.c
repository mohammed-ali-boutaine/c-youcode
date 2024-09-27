#include <stdio.h>
#include <string.h>


int main() {

    char n[100];
    printf("entrez un nomber: ");
    scanf("%s",n);

    int len = strlen(n);
    for(int i=strlen(n)-1 ; i >=0 ; i--){
        printf("%c",n[i]);

    }
    return 0;
}