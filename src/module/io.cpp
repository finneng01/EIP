#include "io.h"

// eine posititve Ganz-Zahl einlesen
int einlesen_int (char var_name, int min, int max) {
    int i;

    do {
        printf ("Bitte positive Zahl eingeben (%d < %c < %d): ", min, var_name, max);
        scanf ("%d", &i);
    } while (i < min || i > max);

    return (i);
} // end of einlesen_pos_int()
