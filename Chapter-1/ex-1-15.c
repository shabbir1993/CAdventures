#include <stdio.h>

double fahrToCelcius(int farh); 

main() {
    int fahr,celcius; 
    int lower, upper, step; 
    
    
    lower = 0; 
    upper = 300; 
    step = 20; 
    
    fahr = lower; 
    
    while(fahr <= upper){
        celcius = fahrToCelcius(fahr); 
        printf("%d \t %d \n", fahr, celcius);
        fahr = fahr + 20; 
    }
    
}


double fahrToCelcius(int fahr) {
    return 5 * (fahr-32) / 9; 
}