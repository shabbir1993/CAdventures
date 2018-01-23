/* Write a program to print the corresponding Celcius to Fahrenhite table */
#define LOWER 0 
#define STEP 20
#define UPPER 300

#include <stdio.h>

int main() {
    float fahr, celcius; 
    int lower, upper, step; 
    
    lower = 0; 
    upper = 300; 
    step = 20;
    printf("Celcius\t\tFahrenhite\n");
    while(celcius <= upper) {
        fahr =  ( (9.0/5.0) * celcius) + 32.0; 
        printf("%3.0f\t\t%6.1f\n", celcius, fahr);
        celcius += step;
    }
}