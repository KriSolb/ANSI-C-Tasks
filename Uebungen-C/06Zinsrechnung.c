#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kapital, zinssatz, zinsen;

    printf("Bitte Kapital eingeben: \n");
    scanf("%f", &kapital);

    printf("Bitte Zinssatz eingeben: \n");
    scanf("%f", &zinssatz);

    zinsen = kapital * zinssatz / 100;

    printf("Zinsen: %.2fEuro", zinsen);

    return 0;
}
