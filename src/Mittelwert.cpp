#include <cstdio>

int main() {

    //Variablen
    int n, i;
    double zahl, summe, mittelwert;

    //Eingabe
    printf("Bitte n Eingeben");
    scanf("%d",&n);

    if (n<=0) {
        printf("Für n eine Zahl Größer als Null");
    }

    //Berechnung
    i = 0;
    summe = 0.0;

    while (i<n) {
        printf("Bitte eine Zahl Eingeben: ");
        scanf("%lf",&zahl);
        summe += zahl;
        i++;
    }
    //Mittelwert Berechnen
    mittelwert = summe/n;

    //Ausgabe
    printf("Mittelwert = %f \n", mittelwert);

}