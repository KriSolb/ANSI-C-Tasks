#include<stdio.h>

// Lagerzahlen berechnen

int main() {
    // deklariere Variablen
    float anfangsBestand;
    float endBestand;
    float einKauf;
    float dLagerDauer;
    float dLagerBestand;
    float warenEinsatz;
    float umschlagHaufigkeit;

    // gebe aus: welcher Wert eingeben werden soll
    // weise eingegebenen Wert der Variable zu
    printf("Anfangsbestand:\n");
    scanf("%f", &anfangsBestand);

	printf("Endbestand:\n");
	scanf("%f", &endBestand);

	printf("Einkaufe:\n");
	scanf("%f", &einKauf);

    // berechne Stuff
	dLagerBestand = (anfangsBestand + endBestand ) / 2.0;
	warenEinsatz = anfangsBestand + einKauf - endBestand;
	dLagerDauer = 360 * dLagerBestand / warenEinsatz;
	umschlagHaufigkeit = 360 / dLagerDauer;

    // gib Ergebnisse aus
	printf("Lagerbestand: %.0f\n", dLagerBestand);
	printf("Durchschnittliche Lagerdauer in Tagen: %.0f\n", dLagerDauer);
    printf("Umschlaghaufen: %.0f\n", umschlagHaufigkeit);
    printf("Wareneinsatz durchschnitt: %.0f\n", warenEinsatz);

    // beende Programm
	return 0;
}
