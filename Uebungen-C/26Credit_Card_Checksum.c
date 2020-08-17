#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cardNumber[] = {6,2,5,8,4,3};
    int num = 0;
    int sum_1 = 0;
    int sum_2 = 0;
    int checksum = 0;
    int cardLength = 6;
    int i = 0;

    while (i < cardLength)
    {
        num = cardNumber[i] * 2;
        if (num <= 9)
        {
            sum_1 = sum_1 + num;
        }
        else
        {
            sum_1 = sum_1 + num / 10 + num % 10;
        }
        i = i + 2;
    }

    i = 1;

    while ( i < cardLength)
    {
        sum_2 = sum_2 + cardNumber[i];
        i = i + 2;
    }
    checksum = sum_1 + sum_2;
    printf("%d", checksum);
    return 0;
}
