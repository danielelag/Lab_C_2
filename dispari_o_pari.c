

/* Programma che legge un intero e determina 
e stampa se sia dispari o pari.*/

#include <stdio.h>

int main(void) {

    printf("Enter an integer: ");
    int integer = 0;
    scanf("%d", &integer);


    /* Un numero pari è un multiplo di due. Qualunque
     multiplo di due lascia un resto di zero quando è 
     diviso per due */

    if (integer % 2 == 0) {

        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }

}