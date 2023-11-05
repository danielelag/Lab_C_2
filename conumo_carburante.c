

#include<stdio.h>

int main() {

    // inizializzazione variabili

    float gallons = 0; // float precisione singola 
    float miles = 0;

    // inser. input

    printf("Enter the gallons used (-1 to end)");
    scanf("%f", &gallons);

    while(gallons !=-1){
    
        printf("Enter the miles driven");
        scanf("%f", &miles);

        printf("The miles/gallons for the tank was %.6f: \n ", miles/gallons);

        printf("Enter the gallons used (-1 to end)");
        scanf("%f", &gallons);
        
    }
}
