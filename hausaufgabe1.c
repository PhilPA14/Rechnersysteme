#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char dateipfad[100];
    FILE *datei;

    //Dateipfad als Eingabe einlesen
    printf("Bitte Dateipfad eingeben: ");
    scanf("%100s", dateipfad);

    //Datei zum Schreiben oeffnen
    datei = fopen(dateipfad, "w");

    //Fehler beim oeffnen erkennen und behandeln
    if (datei == NULL) {
        printf("Fehler: Die Datei '%s' konnte nicht erstellt/geoeffnet werden.\n", dateipfad);
        return 1;
    }

    //Strings in die Datei schreiben (file print formatted)
    fprintf(datei, "DHBW\n");
    fprintf(datei, "Labor\n");
    fprintf(datei, "Rechnersystem\n");
    fprintf(datei, "TRDP\n");

    //Datei schliessen
    fclose(datei);

    //Datei zum Lesen oeffnen
    datei = fopen(dateipfad, "r");
    if (datei == NULL) {
        printf("Fehler: Die Datei '%s' konnte nicht zum Lesen geoeffnet werden.\n", dateipfad);
        return 1;
    }

    //Gespeicherten Inhalt auslesen und ausgeben
    printf("\nGelesener Inhalt aus der Datei:\n");
    int zeichen;
    //Schleife laeuft, bis zum Ende der Datei (EOF - End of File)
        while ((zeichen = fgetc(datei)) != EOF) {
        printf("%c", zeichen);
    }

    //Datei am Ende wieder schliessen
    fclose(datei);
    return 0;
}
