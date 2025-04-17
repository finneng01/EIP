#include <cstdio>

int main () {

    int y, xv, xb;

    printf("Bitte einen Zahlenraum eingeben: ");
    scanf("%d  %d",&xv, &xb);

    if (xv == xb) {
        y = (2 * xv) + 3;
        printf("Das Ergebnis von X = %d ist %d", xv, y);
    }
    else if (xv < xb) {  // Nur falls xv kleiner ist
        while (xv <= xb) {
            y = (2 * xv) + 3;
            printf("Das Ergebnis von X = %d ist %d\n", xv, y);
            xv++;
        }
    }
    else {  // Nur falls xv größer ist
        while (xv >= xb) {
            y = (2 * xv) + 3;
            printf("Das Ergebnis von X = %d ist %d\n", xv, y);
            xv--;
        }
    }
}