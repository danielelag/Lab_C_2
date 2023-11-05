
/*Scrivere un programma che permetta di calcolare la media dei voti di una classe. 
Il programma permette all’utente di inserire 10 voti (sotto forma di numeri interi) 
e stampa a schermo la media dei 10 voti inseriti (anch’essa sotto forma di numero intero).*/ 


#include <stdio.h>

int main(void) {

    int grade = 0;
    int total = 0;
    int counter = 1;

    while (counter <= 5) {

        printf("Enter grade: ");
        scanf("%d", &grade);

        total = total + grade;
        counter = counter +1;
    }

    int average = total/ 5;

    printf("Class average is %d", average);

}