#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[11] = {2,7,-2,-1,100,2,5,7,8,9,-6};
    int min = numbers[0];
    int position = 0;
    for (int i = 1; i < 11; i++)
    {
        if (min > numbers[i])
        {
            min = numbers[i];
            position = i;
        }
    }
    printf("Min: %d\nPos: %d", min, position);
    return 0;
}
