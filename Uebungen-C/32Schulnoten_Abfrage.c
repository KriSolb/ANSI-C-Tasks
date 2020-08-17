
#include <stdio.h>
#include <stdlib.h>

main()
{
    system("chcp 1252");        // CHangeCodePage => wehcsel zu einer Codepage, die auch Umlaute, � und das � besitzt
                                // Nummer der Codepage 1252 (Merkregel: 12 Monate, 52 Woche)
    system("cls");              // CLearScreen = L�sche die Bildschirmausgabe in der Konsole


    int noten_array [10][5];    // 10 Sch�ler und PRO Sch�ler 5 Noten
    int note = 0;
    int abfrage = 0;
    printf("\nSch�ler und Noten eintragen:\n");

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            printf("\nSch�lernummer: %d Notennummer %d: ", i+1, j+1);
            fflush(stdin);
            scanf("%d", &note);

            // STATT IF-ELSE, EXCEPTION HANDLING EINF�GEN
            if (note >=1 && note <=5){
            noten_array[i][j] = note;           // WIESO FUNKTIONIERT DAS SO?
            }
            else {
                printf("\nFalscher Wert in Eingabe, bitte einen Wert zwischen 1-5 eingeben.");
            }
        }
    }

    printf("\nSch�lernummer abfragen: \n");
    fflush(stdin);
    scanf("%d", &abfrage);

    for (int y = 0; y < 5; y++)
    {
        printf("Schüler %d hat Noten: %d\n", abfrage, noten_array[abfrage-1][y]);
    }

    system("pause");            // Konsole wird "pausiert" und schlie�t erst nach Tastendruck
}


