#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cost_buy,price,cost_leasing,rate_leasing;

    printf("Enter price:\n");
    scanf("%f", &price);

    cost_buy = price - 1500;


    printf("Enter leasing rate:\n");
    scanf("%f", &rate_leasing);

    cost_leasing = rate_leasing * 12 * 5;

    if (cost_buy > cost_leasing)
    {
        printf("Leasing is cheaper with %.0f than buying with %.0f", cost_leasing, cost_buy);
    }
    else if (cost_buy < cost_leasing)
    {
        printf("Buying is cheaper with %.0f than leasing with %.0f", cost_buy, cost_leasing);
    }
    else if(cost_buy==cost_leasing)
    {
        printf("Same cost buying with %.0f and leasing with %.0f", cost_buy, cost_leasing);
    }
    return 0;
}
