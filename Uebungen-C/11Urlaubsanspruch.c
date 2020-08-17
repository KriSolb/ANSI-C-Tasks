#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, full_vac, work_years, base_vac = 26;
    char retard;

    printf("How old is employee X?:\n");
    scanf("%d", &age);

    printf("\nHow many years does employee X work for the comapny?:\n");
    scanf("%d", &work_years);

//    scanf("%*[^\n]");
//    scanf("%*c");

    printf("\nDoes the employee has a retardation above 50%%?\n");
    scanf("%c", &retard);

    /*calculating age and vacation*/
    if (age < 18)
    {
        base_vac = 30;
    }
    else if (age > 55)
    {
        base_vac = 28;
    }
    else {
        base_vac = base_vac;
    }

    /*calculating retardation degree and vacation*/
    if (retard == 'j'|| retard == 'y')
    {
        full_vac = base_vac + 5;
    }
    else {
        full_vac = base_vac;
    }

    /* calculating work years and vacation*/
    if (work_years >= 10)
    {
        full_vac = full_vac + 2;
    }

    printf("%d", full_vac);


    return 0;
}
