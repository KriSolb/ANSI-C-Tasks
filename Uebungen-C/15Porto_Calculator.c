#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length;
    float height;
    float width;
    float weight;

    printf("Enter length:\n");
    scanf("%f", &length);

    printf("Enter height:\n");
    scanf("%f", &height);

    printf("Enter width:\n");
    scanf("%f", &width);

    printf("Enter weight:\n");
    scanf("%f", &weight);

    if (weight <= 1.5 && length <= 30 && width <= 30 && height <= 15){
        printf("\nYour package porto is 3,49 Euro.\n");
    }
    else if (weight <= 3 && length <= 60 && width <= 30 && height <= 15){
        printf("\nYour package porto is 4,79 Euro.\n");
    }
    else if (weight <= 7 && length <= 120 && width <= 60 && height <= 60){
        printf("\nYour package porto is 5,79 Euro.\n");
    }
    else if (weight <= 15 && length <= 120 && width <= 60 && height <= 60){
        printf("\nYour package porto is 6,99 Euro.\n");
    }
    else if (weight <= 31.5 && length <= 120 && width <= 60 && height <= 60){
        printf("\nYour package porto is 11,99 Euro.\n");
    }
    else {
        printf("Package NOT accepted!\n");
    }

    return 0;
}
