#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight;
    float height;
    printf("Input weight in kg:\n");
    scanf("%f", &weight);

    printf("\nInput height in cm:\n");
    scanf("%f", &height);

    if (height < 150 && weight < 50)
    {
        printf("Use 1st elevator.");
    }
    else if (height < 250 && weight < 125)
    {
        printf("Use 2nd elevator.");
    }
    else if (height < 200 && weight < 500)
    {
        printf("Use 3rd elevator.");
    }
    else
    {
        printf("Use NO elevator.");
    }
    return 0;
}
