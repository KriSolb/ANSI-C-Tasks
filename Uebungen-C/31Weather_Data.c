#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weekly_rain[7] = {5.7, 3.6, 2.1, 0.0, 1.2, 0.9, 0.2};
    float sum_rain = 0.0;
    float ave_rain = 0.0;
    float max_rain = 0.0;
    float min_rain = 0.0;

    for (int i = 0; i < 7; i++)
    {
        sum_rain = sum_rain + weekly_rain[i];

            if (max_rain < weekly_rain[i])
            {
                max_rain = weekly_rain[i];
            }
            if (min_rain > weekly_rain[i])
            {
                min_rain = weekly_rain[i];
            }

    }
    ave_rain = sum_rain / 7;

    printf("Sum rain: %.2f litre\nAverage Rain: %.2f litre\nMax rain: %.2f litre\nMin rain: %.2f litre\n", sum_rain, ave_rain, max_rain, min_rain);

    return 0;
}
