#include <stdio.h>

int main() {

    int n,e;
    int rslt=1;
    
    printf("base: ");
    scanf("%d",&n);
    printf("exposant: ");
    scanf("%d",&e);

    for(int i=0;i<e;i++){
        rslt*=n;
    }
    printf("%d",rslt);


    return 0;
}