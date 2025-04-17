#include <stdio.h>
#include <ctype.h>

int main() {

    //Variable
    long i,n,fak;

    n = -1;
    //Eingabe
    while (n<0) {
        printf("Bitte n Eingeben");
        scanf("%ld",&n);
    }
    //Berechnung
    fak = 1;
    i = 1;

    //Schleife
    while (i<=n) {
        fak *= i;
        i++;
    }
    //Ausgabe

    printf("%ld!= %d \n", n, fak);

}