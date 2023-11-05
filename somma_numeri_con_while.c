
// SOMMA NUMERI FINO A 10 CON WHILE

#include <stdio.h>

int main(void) {

    unsigned int x = 1;
    unsigned int sum = 0;

    while (x <= 10) {

        sum += x;
        ++x;

    }

    printf("Sum is %u", sum);

}