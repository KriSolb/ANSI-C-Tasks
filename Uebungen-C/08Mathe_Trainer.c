#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, sum_u, pro_u, quo_u, sum_c, pro_c, quo_c, sol=0;

    printf("Please enter your first number:\n");
    scanf("%f", &num1);
    printf("Please enter your second number:\n");
    scanf("%f", &num2);

    printf("What equals %.2f plus %.2f\n", num1, num2);
    scanf("%f", &sum_u);

    printf("What equals %.2f multiplied times %.2f\n", num1, num2);
    scanf("%f", &pro_u);

    printf("What equals %.2f devided by %.2f\n", num1, num2);
    scanf("%f", &quo_u);

    sum_c = num1 + num2;
    pro_c = num1 * num2;
    quo_c = num1 / num2;

    if (sum_u == sum_c)
    {
        printf("Your addition is correct!\n");
        sol = sol + 1;
    }
    else
    {
        printf("Your sum %.2f does not equal the computers sum of %.2f\n", sum_u, sum_c);
    }

    if (pro_u == pro_c)
    {
        printf("Your multiplication is correct!\n");
        sol = sol + 1;
    }

    else
    {
        printf("Your product %.2f does not equal the computers product of %.2f\n", pro_u, pro_c);
    }

        if (quo_u == quo_c)
    {
        printf("Your division is correct!\n");
        sol = sol + 1;
    }

    else
    {
        printf("Your quotient %.2f does not equal the computers quotient of %.2f\n", quo_u, quo_c);
    }

    sol = sol/3*100;
    printf("Percentage of correct answer: %.2f%%", sol);

    return 0;
}
