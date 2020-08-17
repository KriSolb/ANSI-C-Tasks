#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    system("chcp 1252");        // CHangeCodePage => wechsel zu einer Codepage, die auch Umlaute, ß und das €-Zeichen besitzt
                                // Nummer der Codepage 1252 (Merkregel: 12 Monate, 52 Woche)
    system("cls");              // CLearScreen = Lösche die Bildschirmausgabe in der Konsole

    char string_array[200];
    char char_finder;
    int checker = 0;
    //TODO:
    //
    printf("Enter string:\n");
    fflush(stdin);
    scanf("%[^\n]", &string_array);

    printf("Your string is: %s\n", string_array);

    printf("Type in a character, and check if it's available in '%s'.\n", string_array);
    fflush(stdin);
    scanf("%c", &char_finder);

    printf("Is the '%c'-character available in '%s'?\n", char_finder, string_array);

    int string_length = strlen(string_array);

    for (int i = 0; i < string_length; i++)
    {
        if(char_finder == string_array[i])
        {
            checker = 1;
        }
    }
    if (checker != 0)
    {
        printf("~~~Yes!~~~\n");
    }
    else
    {
        printf("No...\n");
    }

    system("pause");            // Konsole wird "pausiert" und schlie�t erst nach Tastendruck
}
