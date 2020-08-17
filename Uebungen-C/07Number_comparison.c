#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Enter number one:");
    scanf("%d", &num1);

    printf("\nEnter number two:");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("\n%d is the higher number.\n", num1);
    }
    else if (num1 < num2)
    {
        printf("\n%d is the higher number\n", num2);
    }
    else if (num1 == num2)
    {
        printf("\n%d and %d have the same value.\n", num1, num2);
    }
    return 0;
}
