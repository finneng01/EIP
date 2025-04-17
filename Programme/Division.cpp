#include <cstdio>

int main() {
    //Variablen
    int divident, divisor;
    int ergebnis, rest;

    //Eingabe
    printf("Dividend: ");
    scanf("%d", &divident); //%d = decimal bsp. %f = Zahl in float ausgeben
    printf("Divisor: ");
    scanf("%d", &divisor);

    //Berechnung & Ausgabe
    //Funktion wird nur aufgerufen, wenn der divisor beide Anforderungen erfüllt
    if (divident > divisor && divisor > 0) { // || logisches ODER (Tastenkombi opt. + 7)
        ergebnis = divident / divisor; //Divident wird durch divisor geteilt. Ergebis = Zahl + Rest
        //Es wird nur die Zahl ausgegeben
        rest = divident % divisor; //Selbe wie oben, dieses mal wird nur der Rest ausgegeben
        printf("Resultat: %d Rest: %d \n", ergebnis, rest); //Beide Variablen werden als Dezimalzahlen ausgegeben
        //In der Reihenfolge in der sie in der Klammer stehen

    } else {
      printf("Fehler: Division mit 0 oder Divisor größer Divident");
    }
}