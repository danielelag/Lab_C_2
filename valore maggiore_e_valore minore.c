

/* Programma che riceve in ingresso tre diversi interi 
dalla tastiera, poi stampi la somma, la media, il prodotto, 
il minore e il maggiore di questi numeri.*/

#include <stdio.h>

int main(void) {

    printf("Enter three integers: ");
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int sum = x + y + z;
    int average = (x + y + z) / 3;
    int product = x * y * z;

    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    
    // Smallest value

    if (x < y && x < z) {
        printf("%d is the the smallest\n", x);
    }
    if (y < x && y < z) {
        printf("%d is the smallest\n", y);
    }
    if (z < x && z < y) {
        printf("%d is the smallest\n", z);
    } 


    // Largest value

    if (x > y && x > z) {
        printf("%d is the the largest\n", x);
    }
    if (y > x && y > z) {
        printf("%d is the the largest\n", y);
    }
    if (z > x && z > y) {
        printf("%d is the the largest\n", z);
    }
}