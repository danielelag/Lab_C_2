

/*Scrivere un programma che permetta di calcolare la media dei voti di una classe. Il programma permette all’utente di inserire 
un numero arbitrario di voti (sotto forma di numeri interi) e stampa a schermo la media dei voti inseriti (sotto forma di numero in virgola mobile). 
La sequenza di voti inseriti viene terminata quando l’utente inserisce -1.*/

#include <stdio.h>

int main(void) {

    
    int total = 0;
    int counter = 0;
    int grade = 0;

    printf("Enter grade, -1 to end: ");
    scanf("%d", &grade);

    while (grade != -1) {

        total = total + grade;
        counter = counter +1;

        printf("Enter grade, -1 to end: ");
        scanf("%d", &grade);
    }

    if (counter != 0) {

        double average = (double) total / counter;
        printf("Class average is %.2f\n", average);
        printf("Counter is %d", counter);
    }

    else {
        puts("Fuck you");
    }

}