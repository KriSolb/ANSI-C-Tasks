#include <stdio.h>
#include <stdlib.h>

int main()
{
    float anlagebetrag, zinsen;

    printf("Eingabe Anlagebetrag:\n");
    scanf("%f", &anlagebetrag);

    if(anlagebetrag <= 5000)
    {
        zinsen = anlagebetrag * 1.5 / 100;
    }
    else if (anlagebetrag <= 10000)
    {
        zinsen = anlagebetrag * 1.7 / 100;
    }
    else if (anlagebetrag <= 50000)
    {
        zinsen = anlagebetrag * 1.9 / 100;
    }
    else
    {
        zinsen = anlagebetrag * 2.0 / 100;
    }

    printf("Zinsen %.2f", zinsen);
    return 0;
}
