#include <stdio.h>
#include <stdlib.h>

int main()
{   /*For-Schleife: Anfangswert;Abbruchbedingung;Ablauf*/
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        /*break;*/
        continue;
        printf("still looping like pooping");
    }
    printf("\nwhoopsie no loopsie\n");
    return 0;
}
