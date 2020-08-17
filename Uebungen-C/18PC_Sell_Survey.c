#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, pc, i = 1, hits = 0, num_survey;
    float result;
    char gender;

    printf("How many surveys do you want to take?\n");
    scanf("%d", &num_survey);

    while (i <= num_survey)
    {
        printf("\nWhat's your age?\n");
        scanf("%d", &age);

        printf("\nDo you own a PC? [1] for Yes, [0] for No\n");
        scanf("%d", &pc);

        scanf("%*[^\n]");
        scanf("%*c");
        printf("\nWhat's your gender? [m] for male, [f] for female, [d] for diverse\n");
        scanf("%c", &gender);

        if (age < 21 && pc == 1 && gender == 'm')
        {
            hits = hits + 1;
        }
        i = i + 1;
    }

    result = hits * 100.0 / num_survey;
    printf("\nPercentage of game-buyer: %.2f%%\n", result);
    return 0;
}
