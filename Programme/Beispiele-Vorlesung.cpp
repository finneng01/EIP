//
// Created by Finn Engels on 20.03.25.
//

#include <cstdio>;

int main () {
    //Variablen
    int k,d;
    int n,r;


    //Eingabe
    printf("#Kinder eingeben: ");
    scanf("%d", &k);

    printf("#Dinge eingeben: ");
    scanf("%d", &d);

    //Berechnung
    if (k>0) {
        n = d / k;
        r = d - d/k*k;
        r = d - n*k;
        r = d % k;

        //Ausgabe
        printf("Kinder = %d\n", k);
        printf("Dinge = %d\n", d);

        printf("Dinge pro Kind= %d\n", n);
        printf("Rest = %d\n", r);
    } else {
        printf("Fehler: k ist <= 0");
    }

}
