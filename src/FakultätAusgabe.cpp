#include <cstdio>

int main() {

    //Variable
    int i, n;
    long fak;

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
        printf("%d! = %ld \n",i ,fak);
        i++;
    }

}