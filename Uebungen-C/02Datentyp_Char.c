#include <stdio.h>
#include <stdlib.h>

int main()
{
    char zeichen, zeichen2;

    printf("\nGeben Sie ein Zeichen ein: ");
    scanf("%c", &zeichen);

    //Löschen des Puffers
    scanf("%*[^\n]");
    scanf("%*c");

    printf("\nGeben Sie ein weiteres Zeichen ein: ");
    scanf("%c", &zeichen2);

    printf("%c %d %c %d", zeichen, zeichen, zeichen2, zeichen2);

    return 0;
}
