#include <stdio.h>
#include <ctype.h>

int main() {
    //Variablen
    int i, n;
    float geld, topf;

    //Eingabe
    printf("Bitte # Personen \n");
    scanf("%d", &n);

    //Berechnung
    topf = 0;
    i = 0;
    while (i < n) {
        printf("Geld: ");
        scanf("%f", &geld);
        topf += geld;
        i++;
    }
    //Ausgabe
    printf("%d Leute haben %f Euro gegeben \n", i, topf); //Sowohl i<n und i<=n klappen, da die while schleife auf i = n springt und anschließend erst den vorgang beendet
}