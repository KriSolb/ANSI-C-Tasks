#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //deklariere variablen
    char firstString[11] = {};
    char secondString[11] = {};
    char concatString[22];
    int lengthString1;
    int lengthString2 = 0;


    printf("Enter first string:\n");
//    fflush(stdin);
    fgets(firstString, sizeof(firstString), stdin);
    fflush(stdin);

    printf("\nEnter second string:\n");
    fflush(stdin);
    fgets(secondString, sizeof(secondString), stdin);
    //fflush(stdin);

    lengthString1 = strlen(firstString);
    lengthString2 = strlen(secondString);

    if (lengthString1 > lengthString2)
    {

        strncpy(concatString, firstString, lengthString1 -1);
        concatString[lengthString1 -1] = '\0';
        strncat(concatString, secondString, lengthString2 -1);
    }
    else if (lengthString1 < lengthString2)
    {
        strncpy(concatString, secondString, lengthString2 -1);
        concatString[lengthString2 -1] = '\0';
        strncat(concatString, firstString, lengthString1 -1);
    }
    else if (lengthString1 == lengthString2)
    {
        strncpy(concatString, firstString, -1);
        concatString[lengthString1 -1] = '\0';
        strncat(concatString, secondString, -1);
    }


    printf("\n%s\n", concatString);

    return 0;
}
