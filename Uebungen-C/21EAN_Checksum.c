#include <stdio.h>

int main()
{

int ean_num[12]={4,0,1,6,1,3,8,1,0,0,6,0};
int counter = 0;
int ean_sum = 0;
int ean_checksum = 0;
    for (int i = 0; i <= 11; i = i + 2)
    {
        counter = ean_num[i];
        ean_sum = ean_sum + (counter * 1);
    }
    for (int i = 1; i <= 11; i = i + 2)
    {
        counter = ean_num[i];
        ean_sum = ean_sum + (counter * 3);
    }

    ean_checksum = ean_sum % 10;

    if (ean_checksum > 0)
    {
        ean_checksum = 10 - ean_checksum;
    }

    printf("\nChecksum = %d\n", ean_checksum);

return 0;
}
