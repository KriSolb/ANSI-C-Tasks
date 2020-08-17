#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sec, hours, minutes, seconds;
    printf("Bitte die Sekündchen eingeben: \n");
    scanf("%d", &sec);
    hours = sec / 3600;
    minutes = sec % 3600 / 60;
    seconds = sec % 3600 % 60;
    printf("\n~~~~~~~~~~~\nZeit:\n%d:%d:%dh \n~~~~~~~~~~~\n", hours, minutes,seconds);
    return 0;
}
