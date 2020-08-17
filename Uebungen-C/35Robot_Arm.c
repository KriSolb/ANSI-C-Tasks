#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int row = 4;
    int col = 5;
    int bottle_case [row][col];
    int i = 0;
    int j = 0;
    int action = 0;
    //int const bottle_full = 1;
    //int const bottle_empty = 2;
    //int const bottle_na = 0;
    //char coke;
    //char repeat;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            bottle_case[i][j] = rand() % 3;
        }
    }

    printf("What you wanne do?\n1 - Give Bottle Back\n2 - Take Bottle Out\n");
    fflush(stdin);
    scanf("%d", &action);

    if (action == 1)
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (bottle_case[i][j] == 0)
                {
                    printf("\nCongrats, here is your 8ct, your bottle is stored in place: %d:%d\n", i+1, j+1);
                    bottle_case[i][j] = 2;
                }
                else
                {
                    printf("\nNo Case is full!\n");
                }
            }
        }
    }
    else if (action == 2)
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (bottle_case[i][j] == 1)
                {
                    printf("Have a Coke from position: %d:%d\n", i+1, j+1);
                    bottle_case[i][j] = 0;
                }
            }
        }
    }

    printf("\n\n\n");
    system("pause");
}
