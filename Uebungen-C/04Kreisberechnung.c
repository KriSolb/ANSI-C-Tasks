#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float radius;
    float flaeche;
    const float pi = 3.1415;

    printf("Bitte Radius eingeben: \n");
    scanf("%f", &radius);

    flaeche = pi*pow(radius, 2);
    printf("Kreisflaeche: \n %.2f", flaeche);

    return 0;
}
