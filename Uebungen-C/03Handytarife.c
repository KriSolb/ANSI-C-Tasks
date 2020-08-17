#include <stdio.h>
#include <stdlib.h>

int main()
{
    float minuten;
    float monat1 = 9.20;
    float gesmin1 = 0.248;
    float monat2 = 12.80;
    float gesmin2 = 0.150;
    float rechnung1;
    float rechnung2;

    printf("Bitte Laberminuten pro Monat angeben: \n");
    scanf("%f", &minuten);

    rechnung1 = minuten * gesmin1 + monat1;
    rechnung2 = minuten * gesmin2 + monat2;

    printf("\n Rechnung 1: %.2f", rechnung1);
    printf("\n Rechnung 2: %.2f", rechnung2);

    return 0;
}
