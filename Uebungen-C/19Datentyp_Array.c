#include <stdio.h>
#include <stdlib.h>

int main()
{   /*Deklaration und Vorbesetzen eines Arrays*/
    int zahlen[10];
    int k = 0;
    for (int i = 0; i<10; i++)
    {
        zahlen[i] = k;
        k = k + 2;
    }

    /*ersetze den wert des dritten elemts durch den wert 35*/
//    zahlen[2] = 35;
//    zahlen[1] = 20;

    /*Zugriff uauf die Elemente mit Zählsdchleife*/
    for (int index = 4; index >= 0; --index)
    {
        printf("%d\n", zahlen[index]);
    }

    return 0;
}
