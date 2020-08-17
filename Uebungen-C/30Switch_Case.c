#include <stdio.h>
#include <stdlib.h>

int main()
{
    int switcher;

    printf("Supportlevel:\n");
    scanf("%d", &switcher);
    switch(switcher)
    {
        case 1: printf("Gold");
            break;
        case 2: printf("Silver");
            break;
        case 3: printf("Bronce");
            break;
        case 4: printf("Plum");
            break;
        default: printf("Error");
            break;
    }

    return 0;
}
