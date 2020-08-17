#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*declare variables*/
    int apple_count, pear_count, applejuice_count, pearjuice_count;
    float apple_price = 0.30, pear_price = 0.25, applejuice_price = 1.03, pearjuice_price = 1.25;
    float apple_sum, veggie_sum, juice_sum, netto_sum, brutto_sum;
    const float vat_low = 1.07;
    const float vat_high = 1.19;
    const float coupon = 0.95;

    /*input value for amount of veggies and juice*/
    printf("Please enter number of apples:\n");
    scanf("%d", &apple_count);

    printf("\nPlease ener number of pears:\n");
    scanf("%d", &pear_count);

    printf("\nPlease enter number of apple juice litre:\n");
    scanf("%d", &applejuice_count);

    printf("\nPlease enter number of pear juice litre:\n");
    scanf("%d", &pearjuice_count);

    /*calculate price for veggies and juice*/
    veggie_sum = (apple_count*apple_price) + (pear_count*pear_price);
    juice_sum = (applejuice_count*applejuice_price) + (pearjuice_count*pearjuice_price);

    /*calculate complete netto price for food*/
    netto_sum = veggie_sum + juice_sum;
    printf("\nNetto sum: %.2fEuro", netto_sum);

    /*if-else for coupon*/
    /*set new value for veggie_sum if coupon is applicable*/
    if (netto_sum > 10 && apple_count >= 5)
    {
        apple_sum = (apple_count*apple_price)*coupon;
        veggie_sum = apple_sum + (pear_count*pear_price);
    }

    /*else leave veggie_sum as veggie_sum*/
    else
    {
        veggie_sum = veggie_sum;
    }

   /*show new netto-price*/
    netto_sum = veggie_sum + juice_sum;
    printf("\nNetto sum: %.2fEuro (with coupon)", netto_sum);

    /*add VAT*/
    veggie_sum = veggie_sum * vat_low;
    juice_sum = juice_sum * vat_high;

    /*calculate final price*/
    brutto_sum = veggie_sum + juice_sum;
    printf("\nBrutto sum: %.2fEuro\n", brutto_sum);

    return 0;
}
