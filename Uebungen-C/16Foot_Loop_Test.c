#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, num_num = 0, num_num_num = 1, num_num_num_num = 1;
    do {
     printf("Enter num %d:\n", num_num_num);
     scanf("%d", &num_num);

     num = num + num_num;
     num_num_num_num = num_num_num_num + 1;
     num_num_num++;
    }
    while (num_num_num_num <= 10 );
    printf("\n%d", num);

    return 0;
}
