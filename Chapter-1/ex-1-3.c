/* Modify the temperature conversion program to print a heading above table */

#include <stdio.h>

int main() {

    float fahr, celcius; 
    int lower, upper, step; 
    
    lower = 0; 
    upper = 300; 
    step = 20;
    printf("Fahrenhite\tCelcius\n");
    while(fahr <= upper) {
        celcius =  (5.0/9.0) * (fahr-32.0); 
        printf("%3.0f\t\t%6.1f\n", fahr, celcius);
        fahr += step;
    }
    
    return 0; 
}