#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int row_len = 6;
    int seat_len = 15;
    int seats [row_len][seat_len];
    int row_num = 0;
    int seat_num = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < row_len; i++){
        for (j = 0; j < seat_len; j++){
            seats[i][j] = 1;
            printf("\nRow: %d\nSeat: %d\n", i+1, seats[i][j]);
        }
    }

    printf("Which ROW would you like?:\n");
    fflush(stdin);
    scanf("%d", &row_num);

    printf("Which SEAT would like?:\n");
    fflush(stdin);
    scanf("%d", &seat_num);

    if (seats[row_num-1][seat_num-1] == 1)
    {
        printf("\nYour seat with the SEATNUMBER %d and ROWNUMBER %d has been RESERVED.", seat_num, row_num);
        seats[row_num-1][seat_num-1] = 0;
    }

    else {
        printf("no");
    }

    printf("\n\n\n");
    system("pause");
}
