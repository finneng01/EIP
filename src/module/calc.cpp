# include "calc.h"

// n ueber k berechnen
double n_ueber_k (int x, int y)
{
    return (fakul(x) / (fakul (y) * fakul (x-y)));
} // end of n_ueber_k ()


// fakultaet rekursiv berechnen
double fakul (int x) {
    if (x == 1) {
        return (1.0);
    } else {
        return (x * fakul (x-1));
    }
} // end of fakul ()
