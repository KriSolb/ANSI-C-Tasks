#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    float basic_price, kilom;
    float full_price, age_price, km_price, garage_price;
    char garage;

    printf("What's your age?:\n");
    scanf("%d", &age);

    printf("What's the insurances basic price?:\n");
    scanf("%f", &basic_price);

    printf("How many km do you drive per year?:\n");
    scanf("%f", &kilom);

    scanf("%*[^\n]");
    scanf("%*c");

    printf("Do you park your car in a garage?:\n('y' for yes, leave empty for no)\n");
    scanf("%c", &garage);

    if (age < 25)
    {
        age_price = (basic_price/100*40);
    }
    else
    {
        age_price = -(basic_price/100*10);
    }

    if (kilom >= 15000)
    {
        km_price = (basic_price/100*20);
    }
    else
    {
        km_price = -(basic_price/100*10);
    }

    if (garage == 'y')
    {
        garage_price = -(basic_price/100*5);
    }
    else
    {
        garage_price = (basic_price/100*5);
    }

    full_price = basic_price + garage_price + km_price + age_price;
    printf("Your insurance will cost:\n%.2f\n", full_price);

    return 0;
}
