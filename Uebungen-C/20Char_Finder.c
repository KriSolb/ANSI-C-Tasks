#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name_array[7] = {'k','r','i','s','t','o','f'};
    char char_finder;
    int checker;
    printf("Is the following character available in 'Kristof':\n");

    scanf("%c", &char_finder);

    for (int i = 0; i < 7; i++)
    {
        if(char_finder == name_array[i])
        {
        checker = 1;
        }
    }
    if (checker == 1)
    {
        printf("\n~~~Yes!~~~\n");
    }
    else
    {
        printf("\nNo...\n");
    }

    return 0;
}
