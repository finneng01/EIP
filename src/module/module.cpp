#include "main.h"

int main () {
    int n, k;

    // n einlesen
    n = einlesen_int ('n', 1, 1000);
    k = einlesen_int('k', 1, n);

    printf ("%d ueber %d = %.0lf\n",n , k, n_ueber_k (n, k));
} // end of main ()
