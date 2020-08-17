#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    system("chcp 1252");
    system("cls");

    int i;
    int max = 10;
    char zeichen_einsatz;
    char zeichen_array[max];

    zeichen_array[0]='a';
    zeichen_array[1]='a';
    zeichen_array[2]='\0';
    zeichen_array[3]='a';
    zeichen_array[4]='a';
    zeichen_array[5]='\0';
    zeichen_array[6]='a';
    zeichen_array[7]='a';
    zeichen_array[8]='a';
    zeichen_array[9]='a';

    for (i = 0; i < max-1; i++)
    {
        if (zeichen_array[i] == '\0')
        {
            printf("Please enter a character: \n");
            fflush(stdin);
            scanf("%c", &zeichen_array[i]);
        }
    }

    printf("\n%s", zeichen_array);

    printf("\n\n\n");
    system("pause");
}
