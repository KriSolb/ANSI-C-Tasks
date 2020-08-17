#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kopfgesteuerte Schleife*/
    int oben, zahl, summe;
    summe = 0;
    oben = 10;
    zahl = 3;
    printf("Summe:   Zahl:\n\n");
    while (zahl <= oben)
    {
        printf("   %d\n           %d\n", summe, zahl);
        summe = summe + zahl;
        zahl = zahl + 1;
    }
    printf("   %d\n", summe);

    return 0;
}
