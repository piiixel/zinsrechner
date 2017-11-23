/*
Author:		Fabian Eigenmann
date:		23.11.2017
Name:		zins-rechner
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int laufzeit;
	float zsatz;
	float startKapital;
	float resultat;
	unsigned char operation = '*'; // Operator
	int abfrage = 1; // Programmwiederholung
	int fehler; // Flag, Fehler = 1, kein Fehler = 0

	printf("HP-Rechner 5\n");
	printf("------------\n\n");
	// solange Programm-Wiederholung gewünscht
	do
	{
		// kein Fehler zu Beginn der Berechnung
		fehler = 0;
		if (abfrage == 2)
		{
			// mit dem gleichen Startkapital weiterrechnen
			startKapital = resultat;
		}
		else
		{
			// neue Rechnung
			// Einlesen des Startkapitals
			printf("Startkapital eingeben: ");
			scanf("%f", &startKapital);
			getchar(); // Tastaturbuffer leeren
		}
			// Einlesen des Zinssatzes
		printf("Zinssatz eingeben: ");
		scanf("%f", &zsatz);
		getchar(); // Tastaturbuffer leeren

			  // Einlesen der zweiten Variablen
		printf("anzulegende Anzahl Jahre eigeben: ");
		scanf("%d", &laufzeit);
		getchar(); // Tastaturbuffer leeren
				   // Berechnung
				   // Ausgabe des Resultats
		// Berechnung
		resultat = startKapital * zsatz * laufzeit;
		if (fehler == 0)
		{
			printf("\n%.4f %c \n %.4f %c \n  %d = %.1f\n\n", startKapital, operation, zsatz, operation, laufzeit, resultat); /* %d für Laufzeit .2f begrenzt Kommastellen %2d zeigt Zahlen untereinander an
																																  Das Anführungszeichen beendet den String deshalb muss eine Anführungszeichen mit einem Backslash gezeichnet werden
																																  D.h. "C:\norton" -> C: [neue Zeile] norton */
		}
		// Noch eine Berechung?
		printf("Wollen Sie noch eine Berechnung durchfuehren?\n");
		printf("1 - ja, neue Rechnung\n");
		printf("2 - ja, mit dem Resultat weiterrechnen\n");
		printf("0 - nein, Programm verlassen\n");
		scanf("%d", &abfrage);
		getchar(); // Tastaturbuffer leeren
		printf("\n");
	} while (abfrage > 0);
	return 0;

	}
}
