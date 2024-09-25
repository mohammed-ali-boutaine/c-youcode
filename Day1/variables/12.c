#include <stdio.h>

int main() {


    int num;
    printf("enrez un nomber de quatre chiffres: ");
    scanf("%d",&num);

    int i1 = num/1000;
    int i2 = (num %1000)/100;
    int i3 = (num %100)/10;
    int i4 = num % 10;

    printf("%d%d%d%d",i4,i3,i2,i1);

    return 0;
}