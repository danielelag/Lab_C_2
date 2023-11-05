

// Programma che calcola la potenza di un unsigned

#include <stdio.h>

int main(void) {

    unsigned int i = 1;
    unsigned int power = 1;

    printf("Enter a number and its power: ");
    unsigned int x = 0;
    unsigned int y = 0;
    scanf("%u %u", &x, &y);

    while (i <= y) {

        power *= x;
        ++i;

    }

    printf("Power is %u", power);

}